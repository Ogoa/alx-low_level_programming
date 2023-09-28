#include "main.h"

/**
 * get_endianness - Evaluates the endianness of a computer
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	int n = 0;

	n = *((int *)&num);
	if (n == 0)
		return (0);
	else
		return (1);
}
