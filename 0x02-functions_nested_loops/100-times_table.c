#include "main.h"

/**
 * print_times_table - Prints the 'n' times table, starting with 0
 * @n: The number whose table is to be generated
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
					_putchar('0' + k);
				if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + k);
				}
				else if (k >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (k / 10));
					_putchar('0' + (k % 10));
				}
			}
			_putchar('\n');
		}
	}
}
