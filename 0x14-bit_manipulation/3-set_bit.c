#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Pointer to the integer value
 * @index: The specified index where the bit is to be manipulated
 *
 * Return: 1 on success, otherwise 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int num = 1;

	if (index > 31)
		return (-1);
	while (i < index)
	{
		num = num << 1;
		i++;
	}
	*n = *n | num;
	return (1);
}
