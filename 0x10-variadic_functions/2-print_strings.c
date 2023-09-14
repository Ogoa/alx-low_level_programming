#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line
 * A separator is printed between the strings
 * @separator: Pointer to the memory location of the string
 * being printed as the separator
 * @n: The number of strings passed as optional arguments
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	int sep_length = 0;
	unsigned int i;
	va_list strings;

	if (n == 0)
		return;
	if (separator)
	{
		sep_length = _strlen(separator);
		str = malloc((sizeof(char) * sep_length) + 1);
		if (str == NULL)
			return;
		_strcpy(str, separator);
	}
	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		const char *str_arg;

		str_arg = va_arg(strings, char *);
		_print_str(str_arg);
		if (i == (n - 1))
		{
			i++;
			continue;
		}
		_print_str(str);
	}
	va_end(strings);
	free(str);
	_putchar('\n');
}

/**
 * _strlen - Evaluates the length of a given string
 * @str: Pointer to the memory location of the string being evaluated
 *
 * Return: Length of the string
 * 0 if 'str' has a NULL reference
 */
int _strlen(const char *str)
{
	int str_length = 0;

	if (str == NULL)
		return (0);
	while (*(str + str_length) != '\0')
		str_length++;
	return (str_length);
}

/**
 * _strcpy - Copies a string from one memory location to another
 * @dest: Pointer to the memory location where the string is being copied to
 * @src: Pointer to the memory location of the string being copied
 *
 * Return: Nothing
 */
void _strcpy(char *dest, const char *src)
{
	int i = 0;

	if (dest == NULL || src == NULL)
		return;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest +  i) = '\0';
}

/**
 * print_str - Prints a string literal
 * @str: Pointer to the memory location of the string being printed
 *
 * Return: Nothing
 */
void _print_str(const char *str)
{
	int i = 0;

	if (str == NULL)
		return;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
}
