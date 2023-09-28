#include "main.h"

/**
 * flip_bits - Evaluates the number of bits you would need to flip
 * to get from one number to another
 * @n: Number that is the starting point
 * @m: The target value
 *
 * Return: The number of bits flipped to get from 'n' to 'm'
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int num = 0;

	num = n ^ m;
	i = get_flip(num);
	return (i);
}

/**
 * get_flip - Evaluate the number of 1s in a bit string
 * @num: The number whose binary value is to be evaluated for 1s
 *
 * Return: The number of 1s in te binary value of a number
 */
unsigned int get_flip(unsigned long int num)
{
	if (num == 0)
		return (0);
	return ((num & 1) + get_flip(num >> 1));
}
