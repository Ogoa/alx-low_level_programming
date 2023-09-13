#include "function_pointers.h"

/**
 * print_int - Prints an integer passed to it
 * @num: Number to be printed
 */
void print_int(int num)
{
	char temp_array[20];
	int i = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 0 && num <= 9)
	{
		_putchar(num + '0');
	}
	else
	{
		while (num)
		{
			temp_array[i] = (num % 10) + '0';
			num /= 10;
			i++;
		}
		while (i)
			_putchar(temp_array[--i]);
	}
}
