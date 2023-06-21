#include "monty.h"

/**
 * sq_pstr -  prints the string starting at the top of the stack
 * @stack: stack
 * @line_number: line number of interpreted opened file
 */
void sq_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void) line_number;

	while (tmp)
	{
		if (tmp->n <= 0 || tmp->n > 127)
			break;
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
}
