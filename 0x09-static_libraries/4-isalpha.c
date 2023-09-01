#include "main.h"

/**
 * _isalpha - Checks if a charachter is an alphabetic character
 * @c: Character to be checked
 *
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
