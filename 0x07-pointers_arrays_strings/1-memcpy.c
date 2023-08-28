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
	int dest_length = 0;
	int src_length = 0;

	while (*(temp_dest + dest_length) != '\0')
		dest_length++;
	while (*(temp_src + src_length) != '\0')
		src++;
	if ((dest_length < n) && (src_length < n))
	{
		int pos = 1;

		while (pos <= n)
		{
			*temp_dest = *src_dest;
			temp_dest++;
			src_dest++;
			pos++;
		}
	}
	else
	{
		return (dest);
	}
	return (dest);
}
