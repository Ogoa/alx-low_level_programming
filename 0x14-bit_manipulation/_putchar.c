#include <unistd.h>
#include "main.h"

/**
 * _putchar - Prints a character on the standard output
 * @c: The character literal to be printed
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
