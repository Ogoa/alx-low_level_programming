#include "main.h"

/**
 * _memcpy - Copies a memory area
 * @dest: Pointer to the memory block being copied to
 * @src: Pointer to the memory block being copied from
 * @n: The number of bytes being copied
 *
 * Return: Pointer to 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp_dest = dest;
	char *temp_src = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*temp_dest = *temp_src;
		temp_dest++;
		temp_src++;
	}
	return (dest);
}
