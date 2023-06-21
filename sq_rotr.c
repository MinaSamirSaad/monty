#include "monty.h"

/**
 * sq_rotr - The last element of the stack becomes the top element of the stack
 * @stack: stack
 * @line_number: line number at opened interpreted file
 */

void sq_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *old_tail;
	(void) line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;
	old_tail = *stack;
	while (old_tail->next != NULL)
		old_tail = old_tail->next;
	old_tail->prev->next = NULL;
	old_tail->prev = NULL;
	old_tail->next = *stack;
	(*stack)->prev = old_tail;
	*stack = old_tail;
}
