#include "main.h"
#include <ctype.h>

/**
 * print_alphabet - Prints the alphabet from a to z
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i <= 'z'; i++)
	{
		_putchar(tolower(i + 48));
	}
	return;
}
