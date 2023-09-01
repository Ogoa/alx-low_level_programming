#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies two numbers and prints the result
 * @argc: The number of arguments passed
 * @argv: An array of strings containing the arguments passed
 *
 * Return: Always 0 (Successful exit)
 */
int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		product *= atoi(*(argv + i));
	}
	printf("%d\n", product);
	return (0);
}
