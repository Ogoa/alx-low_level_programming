#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Pointer to the string being printed
 */
void _print_rev_recursion(char *s)
{
	char *temp = s;

	if (*temp == '\0')
		return;
	temp++;
	_print_rev_recursion(temp);
	_putchar(*s);
}
