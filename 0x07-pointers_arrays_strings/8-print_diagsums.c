#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the memory block containing the matrix
 * @size: Dimensions of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
	}
	printf("%d, ", sum1);
	for (i = size - 1, j = 0; j < size; i--, j++)
	{
		sum2 += a[j][i];
	}
	printf("%d\n", sum2);
}
