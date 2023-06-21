#include "monty.h"

/**
 * sq_swap -  swaps the top two elements of the stack.
 * @stack: stack
 * @line_number: line number at opened interpreted file
 */
void sq_swap(stack_t **stack, unsigned int line_number)
{
int tmp;

if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
free_mem(stack);
exit(EXIT_FAILURE);
}
tmp = (*stack)->n;
(*stack)->n = (*stack)->next->n;
(*stack)->next->n = tmp;
}
