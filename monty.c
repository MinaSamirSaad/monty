#include "monty.h"

/**
 * check_argc - check number of argc
 * @argc: number of arguments
 * if != 2 error and exit with error exit failure
 * else do nothing
 */
void check_argc(int argc)
{
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
}
/**
 * open_file - open file monty
 * @file_name: name of file
 * attempt to open file
 * if fail exit with error EXIT_FAILURE
 * else do nothing
 */
void open_file(char *file_name)
{
/* open the file monty bytecode */
memory1.m_file = fopen(file_name, "r");
if (memory1.m_file == NULL)
{
fprintf(stderr, "Error: Can't open file %s\n", file_name);
exit(EXIT_FAILURE);
}
}

/**
 * main - traverse Monty bytecode file and execute every line
 * @argc: arguments number 2 (prog name, bytecode file name)
 * @argv: array of strings containt the 2 arguments stated above
 * Return: success 0, error EXIT_FAILURE
 */
int main(int argc, char *argv[])
{
/* check argc == 2 */
check_argc(argc);

/* open the file monty bytecode */
open_file(argv[1]);

/* start executing the file */
execute_monty();

return (0);
}
