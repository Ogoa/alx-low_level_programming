#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size
 * using the '#' character
 * @size: The dimensions of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = size;
		int j = 0;
		int n;

		while (i--)
		{
			j++;
			for (n = 1; n <= i; n++)
			{
				_putchar(' ');
			}
			for (n = 1; n <= j; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
