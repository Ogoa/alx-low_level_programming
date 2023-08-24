#include "main.h"

/**
 * leet - Encodes a string in your code
 * @str: The string to be encoded
 *
 * Return: Pointer to the resulting encoded string
 */
char *leet(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if ((*(str + i) == 65) || (*(str + i) == 97))
		{
			*(str + i) = 52;
			i++;
		}
		else if ((*(str + i) == 101) || (*(str + i) == 69))
		{
			*(str + i) = 51;
			i++;
		}
		else if ((*(str + i) == 111) || (*(str + i) == 79))
		{
			*(str + i) = 48;
			i++;
		}
		else if ((*(str + i) == 116) || (*(str + i) == 84))
		{
			*(str + i) = 55;
			i++;
		}
		else if ((*(str + i) == 108) || (*(str + i) == 76))
		{
			*(str + i) = 49;
			i++;
		}
		else
		{
			i++;
			continue;
		}
	}
	return (str);
}
