#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Adds positive numbers and prints the sum
 * @argc: Number of arguments passed
 * @argv: An array of strings containing the arguments passed
 *
 * Return: Always 0 (successful exit)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(*(argv + i)))
		{
			sum += atoi(*(argv + i));
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
