#include "monty.h"

/**
 * sq_add -  adds the top two elements of the stack.
 * @stack: stack
 * @line_number: line number at opened interpreted file
 */
void sq_add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		free_mem(stack);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n += (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
