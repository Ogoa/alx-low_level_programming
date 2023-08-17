#include "main.h"

/**
 * _isupper - Checks if a character is uppercase or not
 * @c: Character to be checked
 *
 * Return: 1 if uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
