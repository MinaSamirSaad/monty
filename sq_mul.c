#include "monty.h"

/**
 * sq_mul - multiplies second top element of stack with top element of stack.
 * @stack: stack
 * @line_number: line number at opened interpreted file
 */
void sq_mul(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		free_mem(stack);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n *= (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
