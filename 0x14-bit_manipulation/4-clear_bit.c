#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer to the integer value
 * @index: Index of the bit to be manipulated
 *
 * Return: 1 on success, otherwise 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;
	unsigned int i = 0;

	if (index > 31)
		return (-1);
	if (*n == 0)
		return (1);
	while (i < index && num <= *n)
	{
		num = num << 1;
		i++;
	}
	*n = *n ^ num;
	return (1);
}
