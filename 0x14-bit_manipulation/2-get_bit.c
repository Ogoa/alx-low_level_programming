#include "main.h"

/**
 * get_bit - Evaluates the value of a bit at a given index
 * @n: The number in decimal form
 * @index: The index of the bit to be evaluated
 *
 * Return: The value of the bit at 'index'
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int  i = 0;

	if (index > 31)
		return (-1);
	while (i < index)
	{
		n = n >> 1;
		i++;
	}
	return (n & 1);
}
