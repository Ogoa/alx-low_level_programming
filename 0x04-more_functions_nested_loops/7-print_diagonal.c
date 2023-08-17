#include "main.h"

/**
 * print_diagonal - Prints '\' a given number of times
 * @n: The number of times '\' should be printed
 */
void print_diagonal(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			int j;

			for (j = 1; j <= i; j++)
			{
				if (j != i)
					_putchar(' ');
				else
					_putchar('\\');
			}
			i++;
			_putchar('\n');
		}
	}
}
