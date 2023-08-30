#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: Pointer to the string being printed
 */
void _puts_recursion(char *s)
{
	char *temp_ptr = s;

	if (*temp_ptr == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*temp_ptr);
	temp_ptr++;
	_puts_recursion(temp_ptr);
}
