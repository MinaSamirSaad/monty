#include "monty.h"
/**
 * sq_pchar -  prints the char at the top of the stack
 * @stack: stack
 * @line_number: line number of interpreted opened file
 */
void sq_pchar(stack_t **stack, unsigned int line_number)
{
char *err_msg = NULL;

if (*stack == NULL)
err_msg = "can't pchar, stack empty";
else if ((*stack)->n < 0 || (*stack)->n > 127)
err_msg = "can't pchar, value out of range";
if (err_msg)
{
fprintf(stderr, "L%u: %s\n", line_number, err_msg);
free_mem(stack);
exit(EXIT_FAILURE);
}
printf("%c\n", (*stack)->n);
}
