#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array
 * @array: Pointer to the array being manipulated
 * @size: The size of the array
 * @action: Pointer to the function being executed on the array elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
		_putchar('\n');
	}
}
