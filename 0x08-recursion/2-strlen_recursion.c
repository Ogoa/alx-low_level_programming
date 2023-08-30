#include "main.h"

/**
 * _strlen_recursion - Evaluates the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the given string
 */
int _strlen_recursion(char *s)
{
	char *temp_ptr = s;

	if (*temp_ptr == '\0')
		return (0);
	temp_ptr++;
	return (1 + _strlen_recursion(temp_ptr));
}
