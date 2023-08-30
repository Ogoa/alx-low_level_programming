#include "main.h"

/**
 * is_prime_number - Evaluates if a given number is primal or not
 * @n: The number being evaluated
 *
 * Return: 1 if 'n' is a prime number and 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, 2));
}

/**
 * is_divisible - Checks the divisibility of the given number by other numbers between 1 and n-1
 * @n: The number being evaluated
 * @div: The divisor
 *
 * Return: O if the number is divisible and 1 if otherwise
 */
int is_divisible(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);
	return (is_divisible(n, div + 1));
}
