#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: Number of characters to copy from 's2'
 *
 * Return: A pointer to the resulting string
 * NULL if the function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	char *conc_str;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_length = get_length(s1);
	s2_length = get_length(s2);
	if (n > s2_length || n == s2_length)
	{
		conc_str = malloc((sizeof(char) * (s1_length + s2_length)) + 1);
	}
	else
	{
		s2_length = n;
		conc_str = malloc((sizeof(char) * (s1_length + s2_length)) + 1);
	}
	if (conc_str == NULL)
		return (NULL);
	for (i = 0; i < s1_length; i++)
		*(conc_str + i) = *(s1 + i);
	for (j = 0; j < s2_length; j++, i++)
		*(conc_str + i) = *(s2 + j);
	*(conc_str + i) = '\0';
	return (conc_str);
}

/**
 * get_length - Evaluates the length of a given string
 * @str: Pointer to the string being evaluated
 *
 * Return: The length of the string
 */
unsigned int get_length(char *str)
{
	unsigned int str_length = 0;

	while (*(str + str_length) != '\0')
		str_length++;
	return (str_length);
}
