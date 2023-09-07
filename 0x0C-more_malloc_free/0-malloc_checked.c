#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc and returns a
 * pointer to the allocated memory
 * @b: The number of bytes needed for the memory block being created
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
