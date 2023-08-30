#include "main.h"

/**
 * factorial - Evaluates the factorial of a number
 * @n: The number whose factorial is to be calculated
 *
 * Return: The factorial of 'n'
 * -1 if 'n' is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
