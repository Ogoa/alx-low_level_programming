#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	char *reverse = "";
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		*(reverse + j) = *(s + i);
		i--;
		j++;
	}
}
