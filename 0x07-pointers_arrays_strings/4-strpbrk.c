#include "main.h"

/**
 * _strpbrk - Searches a string for any character in a predefined set
 * @s: The string being searched for a string
 * @accept: The set of acceptable characters to be searched for in the string
 *
 * Return: The pointer to the first occurrence of a matching character
 * NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp_ptr = s;
	int set_length = 0;

	while (*(accept + set_length) != '\0')
		set_length++;
	while (*temp_ptr != '\0')
	{
		int i;

		for (i = 0; i < set_length; i++)
		{
			if (*temp_ptr == *(accept + i))
				return (temp_ptr);
		}
		temp_ptr++;
	}
	return (NULL);
}
