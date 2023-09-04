#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * that contains a copy of the string given as a parameter.
 * @str: The string being copied to the newly allocated memory
 *
 * Return: The pointer to the copied string
 */
char *_strdup(char *str)
{
	char *str_ptr = str;
	char *dup_ptr;
	int str_length = 0;
	int i;

	if (str_ptr == NULL)
		return (NULL);
	while (*(str_ptr + str_length) != '\0')
		str_length++;
	/*str_length is the length of the string(excluding the null character*/
	dup_ptr = malloc((sizeof(char) * str_length) + 1);
	if (dup_ptr == NULL)
		return (NULL);
	for (i = 0; i < str_length; i++)
	{
		*(dup_ptr + i) = *(str_ptr + i);
	}
	*(dup_ptr + i) = '\0';
	return (dup_ptr);
}
