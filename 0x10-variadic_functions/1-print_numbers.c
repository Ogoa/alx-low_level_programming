#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers passed into the funtion as arguments
 * @separator: Pointer to a string value that is to be printed
 * between each number
 * @n: The number of optional arguments passed
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *str;
	int sep_length = 0;
	unsigned int i;
	va_list numbers;

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
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		_print_int(va_arg(numbers, int));
		if (i == (n - 1))
		{
			i++;
			continue;
		}
		_print_str(str);
	}
	va_end(numbers);
	_putchar('\n');
	free(str);
}

/**
 * _strlen - Evaluates the length of a given string
 * @str: Pointer to the memory location holding the string variable
 *
 * Return: The length of the string
 * 0 if the pointer has a null reference
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
 * @dest: Pointer to the memory location where the given
 * string is being copied to
 * @src: Pointer to the memory location holding the string to be copied
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
	*(dest + i) = '\0';
}

/**
 * _print_int - Prints a number
 * @num: The number to be printed
 *
 * Return: Nothing
 */
void _print_int(int num)
{
	char temp_array[20]; /* Buffer to be used if num > 9 */
	int i = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 0 && num <= 9)
	{
		_putchar(num + '0');
	}
	else
	{
		while (num)
		{
			*(temp_array + i) = (num % 10) + '0';
			num /= 10;
			i++;
		}
		while (i)
			_putchar(temp_array[--i]);
	}
}

/**
 * _print_str - Prints a string
 * @str: Pointer to the memory location of the string
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
