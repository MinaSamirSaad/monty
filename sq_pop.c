#include "monty.h"

/**
 * sq_pop -  removes the top element of the stack.
 * @stack: stack
 * @line_number: line number at opened interpreted file
 */
void sq_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		free_mem(stack);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	*stack = (*stack)->next;
	free(tmp);
}
