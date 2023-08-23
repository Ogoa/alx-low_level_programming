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
	int dest_length = 0;
	int src_length = 0;

	while (*(dest + dest_length) != '\0')
		dest_length++;
	while (*(src + src_length) != '\0')
	{
		*(dest + dest_length) = *(src + src_length);
		src_length++;
		dest_length++;
	}
	*(dest + dest_length) = '\0';
	return (dest);
}
