#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Destination address the string is being copied to
 * @src: The string being copied
 * @n: The number of characters to be copied
 *
 * Return: Pointer to the destination string
 */
char _strncpy(char *dest, char *src, int n)
{
	size_t i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
