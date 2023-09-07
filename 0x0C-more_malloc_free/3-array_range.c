#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: The lower limit of the range (included)
 * @max: The upper limit of the range (included)
 *
 * Return: The pointer to the newly created array
 * NULL if 'min' > 'max'
 */
int *array_range(int min, int max)
{
	int *new_array = NULL;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	new_array = malloc(sizeof(int) * size);
	if (new_array == NULL)
		return (NULL);
	for (i = 0; i < size; i++, min++)
		*(new_array + i) = min;
	return (new_array);
}
