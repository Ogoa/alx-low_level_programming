#include <stdio.h>
#include "function_pointers.h"

/**
 * _print - Prints the string passed to it
 * @str: Pointer to the memory address holding the string to be printed
 */
void _print(char *str)
{
	int i = 0;

	if (str == NULL)
		return;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
}
