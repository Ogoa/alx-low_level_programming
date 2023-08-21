#include "main.h"

/**
 * puts_half - Prints only half of a string
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int i = 0;
	int length_of_string = 0;
	int n = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	length_of_string = i;
	if ((length_of_string % 2) != 0)
	{
		n = (length_of_string - 1) / 2;
	}
	else
	{
		n = length_of_string / 2;
	}
	i--;
	while (n <= i)
	{
		_putchar(*(str + n) + '0');
		n++;
	}
}
