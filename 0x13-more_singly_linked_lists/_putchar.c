#include <unistd.h>
#include "lists.h"

/**
 * _putchar - Prints a single character onto the console screen
 * @c: The character literal to be printed
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
