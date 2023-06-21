#ifndef MONTY_H
#define MONTY_H

/* in order to use getline fun we define source GNU_SOURCE*/
#define  _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_memory - contain the file (monty script)
 * and op_name (first arg from the current line in that file
 * since op_name is the first contain the address of the first char
 * of that line obtained from monty file by getline function
 * so if free op_name it will free the whole line as well
 *
 * @op_name: operation name (ex: push , pop)
 * @op_arg: operation args (ex : push 10)
 * @m_file: file contains the lines to interpreted
 *
 */
typedef struct global_memory
{
char *op_name;
char *op_arg;
FILE *m_file;
} my_memory;

/* global variable */
my_memory memory1;


void execute_monty(void);
void free_mem(stack_t **stack);

void sq_push(stack_t **stack, unsigned int line_number);
void sq_pall(stack_t **stack, unsigned int line_number);
void sq_pint(stack_t **stack, unsigned int line_number);
void sq_pop(stack_t **stack, unsigned int line_number);
void sq_swap(stack_t **stack, unsigned int line_number);
void sq_add(stack_t **stack, unsigned int line_number);
void sq_nop(stack_t **stack, unsigned int line_number);
void sq_sub(stack_t **stack, unsigned int line_number);
void sq_div(stack_t **stack, unsigned int line_number);
void sq_mul(stack_t **stack, unsigned int line_number);
void sq_mod(stack_t **stack, unsigned int line_number);
void sq_pchar(stack_t **stack, unsigned int line_number);
void sq_pstr(stack_t **stack, unsigned int line_number);
void sq_rotl(stack_t **stack, unsigned int line_number);
void sq_rotr(stack_t **stack, unsigned int line_number);


#endif
