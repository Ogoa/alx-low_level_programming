#include "3-calc.h"

/**
 * op_add - Returns the sum of two numbers
 * @a: The augend
 * @b: The addend
 *
 * Return: Sum of 'a' and 'b'
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of two numbers
 * @a: The subtrahend
 * @b: The minuend
 *
 * Return: Difference between 'a' and 'b'
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two numbers
 * @a: The multiplicand
 * @b: The multiplier
 *
 * Return: The product of 'a' and 'b'
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the quotient of two numbers
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The qoutient of 'a' and 'b'
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of a division between two numbers
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The remainder from dividing 'a' by 'b'
 */
int op_mod(int a, int b)
{
	return (a % b);
}
