#include "monty.h"

/**
 * execute_monty - execute every line in monty file
 */
void execute_monty(void)
{
char *str_line = NULL;
size_t sz = 0;
unsigned int i, l_number = 0;
stack_t *head = NULL;
instruction_t arr[] = {{"push", sq_push}, {"pall", sq_pall}, {"pint", sq_pint},
{"pop", sq_pop}, {"swap", sq_swap}, {"add", sq_add}, {"nop", sq_nop},
{"sub", sq_sub}, {"div", sq_div}, {"mul", sq_mul}, {"mod", sq_mod},
{"pchar", sq_pchar}, {"pstr", sq_pstr}, {"rotl", sq_rotl},
{"rotr", sq_rotr}, {NULL, NULL}};

/* read file line by line(\n) until EOF or error then getline -> -1 */
/* getline in stdio.h only in linux not in windows */
while (getline(&str_line, &sz, memory1.m_file) != -1)
{
l_number++;
memory1.line = str_line;
memory1.op_name = strtok(str_line, " \n");
/* check if line empty or comment line*/
if (memory1.op_name == NULL || memory1.op_name[0] == '#')
continue;
memory1.op_arg = strtok(NULL, " \n");

for (i = 0; arr[i].opcode; i++)
{
if (strcmp(arr[i].opcode, memory1.op_name) == 0)
{
arr[i].f(&head, l_number);
break;
}
}
if (arr[i].opcode == NULL)
{
fprintf(stderr, "L%u: unknown instruction %s\n", l_number, memory1.op_name);
free_mem(&head);
exit(EXIT_FAILURE);
}
}
free_mem(&head);
}
