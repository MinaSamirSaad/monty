#include "monty.h"
/**
 * free_mem - free allocated memory
 * @stack: linked list
 * free linked list
 * free op_name: line by getline
 * close file that has name m_file
 */
void free_mem(stack_t **stack)
{
        stack_t *tmp;

        while (*stack)
        {
                tmp = *stack;
                *stack = (*stack)->next;
                free(tmp);
        }
        free(memory1.op_name);
        fclose(memory1.m_file);
}
