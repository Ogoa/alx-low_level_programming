#include <unistd.h>
#include "variadic_functions.h"

/**
 * _putchar - Prints the value passed into it on the console screen
 * @c: Pointer to the character value being printed
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
