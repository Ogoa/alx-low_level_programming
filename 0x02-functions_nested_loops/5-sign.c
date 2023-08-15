#include "main.h"

/**
 * print_sign - Determines the sign of a given number
 * @n: The number whose sign is being evaluated
 *
 * Return: 1 if n is positive, 0 if n is zero and -1 if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (-1);
	}
}
