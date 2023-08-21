#include "main.h"

/**
 * puts2 - Prints every other charcater of a string, starting with the first
 * @str: String whose characters are to be printed
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(*(str + i));
			i++;
		}
		else
		{
			i++;
			continue;
		}
	}
	_putchar('\n');
}
