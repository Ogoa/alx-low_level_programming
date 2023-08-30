#include "main.h"

/**
 * _sqrt_recursion - Evaluate the natural square root of a number
 * @n: The number whose natural square root is to be evaluated
 * 
 * Return: The natural square root of 'n'
 * -1 if the 'n' does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (my_sqrt(n, root));
}

/**
 * my_sqrt - Calculates the square root of a given number
 * @n: Number whose square root is to be calculated
 * @root: The root to be tested
 *
 * Return: The square root of the number
 */
int my_sqrt(int n, int root)
{
	if ((root * root) == n)
		return (root);
	if (root == (num / 2))
		return (-1);
	return (my_sqrt(n, root + 1));
}
