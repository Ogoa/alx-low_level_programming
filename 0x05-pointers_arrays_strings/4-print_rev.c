#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be reversed
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(*(s + i) + '0');
		i--;
	}
	_putchar('\n');
}
