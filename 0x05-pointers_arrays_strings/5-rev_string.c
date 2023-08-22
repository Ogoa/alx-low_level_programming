#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	char reverse = '\0';
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++)
	{
		reverse = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = reverse;
		i--;
	}
}
