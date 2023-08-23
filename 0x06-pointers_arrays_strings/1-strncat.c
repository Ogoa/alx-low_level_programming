#include "main.h"

/**
 * _strncat - Concatenates two strings by appending 'n' bytes
 * from 'src' to 'dest'
 * @dest: The string being appended to
 * @src: The string being cncatenated to dest
 * @n: The number of characters in src to be appended to dest
 *
 * Return: The pointer to the resulting string 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int i;

	while (*(dest + dest_length) != '\0')
		dest_length++;
	for (i = 0; i < n; i++)
	{
		*(dest + dest_length) = *(src + i);
		dest_length++;
	}
	*(dest + dest_length) = '\0';
	return (dest);
}
