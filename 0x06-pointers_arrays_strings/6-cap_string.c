#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be manipulated
 *
 * Return: The pointer to the resulting modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (
				((*(str + i) >= 97) && (*(str + i) <= 122)) ||
				((*(str + i) >= 65) && (*(str + i) <= 90))
				)
		{
			if (((*(str + i) >= 97) && (*(str + i) <= 122)) && (*(str + i - 1) == ' '))
			{
				*(str + i) -= 32;
				i++;
			}
			else
			{
				i++;
				continue;
			}
		}
		else
		{
			i++;
			continue;
		}
	}
	return (str);
}
