#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Executes the program
 * Performs a mathematical operation on two operands
 * depending on what operator has been specified by the user
 * @argc: Number of arguments passed into the program
 * @argv: Pointer to an array of strings containing the arguments
 * passed int the program from the console
 *
 * Return: Always 0 (Successful exit)
 * Terminate process with a status of 98 if arguments are less or more
 * Terminate process with a status of 99 if an invlaid operator is passed
 * Terminate process with a status of 100 if a divisor is 0
 */
int main(int argc, char **argv)
{
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	calc = get_op_func(*(argv + 2));
	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (**(argv + 2) == '/' && atoi(*(argv + 3)) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", calc(atoi(*(argv + 1)), atoi(*(argv + 3))));
	return (0);
}
