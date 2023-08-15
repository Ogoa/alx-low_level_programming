#include "main.h"

/**
 * print_last_digit - Returns the last digit of a number
 * @num: The number who's last digit is to be returned
 *
 * Return: The last digit of the given number
 */
int print_last_digit(int num)
{
	int a;

	if (num < 0)
		num = -num;
	a = num % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
