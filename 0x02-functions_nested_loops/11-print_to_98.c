#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural number upto 98
 * @n: Starting number
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 98; i++)
	{
		printf("%d, ", i);
	}
	printf("98\n");
}
