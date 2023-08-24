#include "main.h"

/**
 * reverse_array - Reverses the contents of an array of integers
 * @a: The array to be reversed
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + j);
		*(a + j) = *(a + i);
		*(a + i) = temp;
	}
}
