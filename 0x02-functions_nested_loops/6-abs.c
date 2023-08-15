#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @num: The integer whose absolute value is to be obtained
 *
 * Return: The absolute value of the given integer
 */
int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
