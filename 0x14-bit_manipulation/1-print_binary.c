#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The binary number to be converted to its binary equivalent
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n == 1)
	{
		_putchar('1');
	}
	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
