#include "hash_tables.h"

/**
 * _strdup - Duplicates a string
 * @str: Address of the string to be duplicated
 *
 * Return: Address of the duplicated string
 * Otherwise NULL on failure
 */
char *_strdup(const char *str)
{
	char *dup_str;
	int i = 0;

	if (str == NULL)
		return (NULL);

	dup_str = malloc(sizeof(char) * (_strlen(str) + 1));
	if (dup_str == NULL) /* If malloc fails */
		return (NULL);
	while (*(str + i) != '\0')
	{
		*(dup_str + i) = *(str + i);
		i++;
	}
	*(dup_str + i) = '\0';

	return (dup_str);
}
