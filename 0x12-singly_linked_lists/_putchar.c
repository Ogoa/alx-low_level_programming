#include <unistd.h>
#include "lists.h"

/**
 * _putchar - Prints a single character literal on the standard ouptut
 * @c: The character to be printed
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
