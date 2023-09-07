#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array unsing malloc
 * @nmemb: Number of elements to be contained in the allocated memory block
 * @size: The number of bytes required by each element
 *
 * Return: The pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *my_arr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	my_arr = malloc(size * nmemb);
	if (my_arr == NULL)
		return (NULL);
	_memset(my_arr, 0, nmemb * size);
	return (my_arr);
}

/**
 * _memset - Populates memory with a given byte
 * @ptr: Pointer to the area in memory to be filled
 * @c: The constant byte
 * @n: The number of times to copy the constant byte
 */
void _memset(char *ptr, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(ptr + i) = c;
}
