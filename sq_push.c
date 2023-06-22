#include "monty.h"

/**
 * is_num - check if n can be converted to number
 * @n: string to check
 * Return: (0) if not number (1) if is number
 */
int is_num(char *n)
{
int i;

if (n == NULL)
return (0);
for (i = 0; n[i]; i++)
{
if (i == 0 && (n[i] == '-' || n[i] == '+'))
continue;
if (n[i] < '0' || n[i] > '9')
return (0);
}
return (1);
}
/**
 * sq_push - push new node to stack
 * @stack: stack top
 * @line_number: line number in opened file to interpret
 */
void sq_push(stack_t **stack, unsigned int line_number)
{
stack_t *new_node;
stack_t *temp;

if (is_num(memory1.op_arg) == 0)
{
fprintf(stderr, "L%u: usage: push integer\n", line_number);
free_mem(stack);
exit(EXIT_FAILURE);
}
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
free_mem(stack);
exit(EXIT_FAILURE);
}
new_node->n = atoi(memory1.op_arg);
if (memory1.mode == 0)
{
new_node->prev = NULL;
new_node->next = *stack;
if (*stack)
(*stack)->prev = new_node;
*stack = new_node;
}
else
{
temp = *stack;
while (temp->next != NULL)
temp = temp->next;
new_node->prev = temp;
new_node->next = NULL;
if (temp)
temp->next = new_node;
else
*stack = new_node;
}
}
