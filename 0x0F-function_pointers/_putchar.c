#include <unistd.h>
#include "function_pointers.h"

/**
 * _putchar - Prints a character onto the screen
 * @c: The character to be printed
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
