#include "main.h"

/**
 * _strcpy - Copies the string pointed to to a buffer
 * and returns the pointer to 'dest'
 * @dest: Address of the buffer being pointed to
 * @src: Address of the string being pointed to
 *
 * Return: The pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
