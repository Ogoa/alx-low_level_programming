#include "main.h"

/**
 * string_toupper - Converts lowercase letters of a string to uppercse
 * @str: The string to be converted
 *
 * Return: The pointer to the string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 97) && (*(str + i) <= 122))
		{
			*(str + i) -= 32;
		}
		i++;
		while (*(str + i) == ' ')
		{
			i++;
		}
	}
	return (str);
}
