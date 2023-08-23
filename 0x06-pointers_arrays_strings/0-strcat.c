#include "main.h"

/**
 * _strcat - Conctenates one string to another
 * @dest: The string to be appended to
 * @src: The string to be conctenated to dest
 *
 * Return: THe resulting string
 */
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	while (*(dest + length) != '\0')
	{
		length++;
	}
	while (*(src + i) != '\0')
	{
		*(dest + length) = *(src + i);
		length++;
		i++;
	}
	*(dest + dest_length) = '\0';
	return (dest);
}
