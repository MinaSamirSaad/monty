#include "monty.h"

/**
 * sq_pint -  prints value top of the stack, followed by a new line
 * @stack: stack
 * @line_number: line number at opened interpreted file
 */
void sq_pint(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
free_mem(stack);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
