#include "monty.h"

/**
 * sq_div - divides second top element of stack by top element of the stack
 * @stack: stack
 * @line_number: line number at opened interpreted file
 */
void sq_div(stack_t **stack, unsigned int line_number)
{
char *err_msg = NULL;

if (*stack == NULL || (*stack)->next == NULL)
err_msg = "can't div, stack too short";
else if ((*stack)->n == 0)
err_msg = "division by zero";

if (err_msg)
{
fprintf(stderr, "L%u: %s\n", line_number, err_msg);
free_mem(stack);
exit(EXIT_FAILURE);
}
(*stack)->next->n /= (*stack)->n;
*stack = (*stack)->next;
free((*stack)->prev);
(*stack)->prev = NULL;
}
