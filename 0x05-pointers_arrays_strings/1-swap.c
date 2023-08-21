#include "main.h"

/**
 * swap_int - Swaps the values of the two integers
 * @a: First integer argument
 * @b: Second integer argument
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
