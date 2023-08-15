#include "main.h"
#include <ctype.h>

/**
 * print_alphabet - Prints the alphabet from a to z
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(tolower(i));
	}
	_putchar('\n');
}
