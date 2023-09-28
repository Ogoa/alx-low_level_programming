#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 * @b: Pointer to a string representing the binary number
 *
 * Return: The integer equivalent of the binary number
 * 0 if there is a character other than 0 or 1 in 'b', or 'b' is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int b_length = 0;
	int index = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (*(b + b_length) != '\0')
	{
		if (*(b + b_length) != '1' && *(b + b_length) != '0')
			return (0);
		b_length++;
	}
	index = --b_length;
	for (i = 0; index >= 0; i++)
	{
		if ((*(b + index) - '0') == 0)
		{
			index--;
			continue;
		}
		num += _pow(2, i);
		index--;
	}
	return (num);
}

/**
 * _pow - Evaluates a number raised to a given power
 * @x: The base
 * @y: The index/exponent
 *
 * Return: x raised to the power of y
 */
int _pow(int x, int y)
{
	int num = 1;
	int i;

	if (y == 0)
		return (1);
	for (i = 0; i < y; i++)
		num *= x;
	return (num);
}
