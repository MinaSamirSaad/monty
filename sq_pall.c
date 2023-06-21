#include "monty.h"

/**
 * sq_pall - print the data in stack
 * @stack: stack
 * @line_number: line number of interpreted opened file
 */
void sq_pall(stack_t **stack, unsigned int line_number)
{
stack_t *tmp = *stack;
(void) line_number;

while (tmp)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
}
}
