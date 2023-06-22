#include "monty.h"
/**
 * sq_mode - check the mode of stack or queue
 * @stack: stack
 * @line_number: line number at opened interpreted file
 */
void sq_mode(stack_t **stack, unsigned int line_number)
{
(void)line_number;
(void)stack;

if (strcmp(memory1.op_name, "stack") == 0)
memory1.mode = 0;
else
memory1.mode = 1;
}
