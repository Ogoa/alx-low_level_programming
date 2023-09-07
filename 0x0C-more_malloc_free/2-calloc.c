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
	unsigned int i;
	char *my_arr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	my_arr = malloc(size * nmemb);
	if (my_arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		*(my_arr + i) = 0;
	return (my_arr);
}
