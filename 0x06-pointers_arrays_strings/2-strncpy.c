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
	size_t i;

	for (i = 0; i < n && (*(src + i) != '\0'); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
		*(dest + i) = '\0';
	return (0);
}
