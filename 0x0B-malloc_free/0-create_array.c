#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and initialises it
 * with a specific character
 * @size: The number of charachters in the array
 * @c: The charachter used to initialise the array
 *
 * Return: The pointer to the created array of characters
 * NULL if 'size' is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array_ptr;

	if (size == 0)
		return (NULL);
	array_ptr = malloc(sizeof(int) * size);
	if (array_ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(array_ptr + i) = c;
	}
	*(array_ptr + i) = '\0';
	return (array_ptr);
}
