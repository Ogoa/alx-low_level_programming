#include "main.h"

/**
 * _pow_recursion - Evaulates the 'x' raised to the power of 'y'
 * @x: The base
 * @y: The index
 *
 * Return: 'x' raised to the power of 'y'
 * -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
