#include "main.h"

/**
 * _strchr - Locates a specific character in a string
 * @s: String to be searched for the character
 * @c: The character to be located in the string
 *
 * Return: Pointer to the location of the character in the string
 * NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *temp_ptr = s;
	int i = 0;

	while (*(temp_ptr) != '\0')
	{
		if (*(temp_ptr) == c)
			return (temp_ptr);
		temp_ptr++;
		i++;
	}
	return (0);
}
