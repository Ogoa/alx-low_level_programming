#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc() and free()
 * @ptr: Pointer to the memory previously allocated using malloc()
 * @old_size: The number of bytes allocated to the memory block
 * referrenced by 'ptr'
 * @new_size: The number of bytes to be allocated to the new memory block
 *
 * Return: The pointer to the reallocated memory block
 * NULL if 'ptr' is NULL, 'new_size' is 0 and 'ptr' is not equal to NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;
	unsigned int upper_limit = 0;

	if (new_size == 0 && ptr) /* Equivalent to free(ptr) */
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		upper_limit = old_size;
		_memcpy((char *)new_ptr, (char *)ptr, upper_limit);
		free(ptr);
	}
	else
	{
		upper_limit = new_size;
		_memcpy((char *)new_ptr, (char *)ptr, upper_limit);
		free(ptr);
	}
	return (new_ptr);
}

/**
 * _memcpy - Copies n bytes from one memory location to another
 * @dest: Destination memory location for the bytes being copied
 * @src: Pointer to the memory location of the bytes being copied
 * @n: The number of bytes to be copied from 'src' to 'dest'
 *
 * Return: Nothing
 */
void _memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
}
