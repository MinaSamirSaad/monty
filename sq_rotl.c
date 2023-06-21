#include "monty.h"

/**
 * sq_rotl -  The top element of the stack becomes the last one,
 * and the second top element of the stack becomes the first one
 * @stack: stack
 * @line_number: line number at opened interpreted file
 */

void sq_rotl(stack_t **stack, unsigned int line_number)
{
stack_t *temp, *old_head;
(void) line_number;

if (*stack == NULL || (*stack)->next == NULL)
return;
temp = *stack;
old_head = *stack;
*stack = (*stack)->next;
(*stack)->prev = NULL;
while (temp->next != NULL)
temp = temp->next;
temp->next = old_head;
old_head->prev = temp;
old_head->next = NULL;
}
