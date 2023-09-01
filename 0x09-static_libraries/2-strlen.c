#include "main.h"

/**
 * _strlen - Calculates the length of a string excluding
 * the null charachter
 * @s: The string whose length is to be calculated
 *
 * Return: The length of the given string
 */
int _strlen(char *s)
{
	int string_length = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		string_length++;
		i++;
	}
	return (string_length);
}
