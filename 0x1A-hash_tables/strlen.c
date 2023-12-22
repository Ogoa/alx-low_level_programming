#include "hash_tables.h"

/**
 * _strlen - Evaluates the length of a string
 * @str: Address of the string
 *
 * Return: Number of characters in the string
 * Otherwise 0 if @str is empty
 */
size_t _strlen(const char *str)
{
	size_t str_len = 0;

	if (str == NULL)
		return (0);
	while (*(str + str_len) != '\0')
		str_len++;

	return (str_len);
}
