#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: The pointer to the memory block containing the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *con_ptr;
	int s1_length = 0;
	int s2_length = 0;
	int i;
	int j;

	if (s1 == NULL)
	{
		char *new_s1 = "";

		s1 = new_s1;
	}
	if (s2 == NULL)
	{
		char *new_s2 = "";

		s2 = new_s2;
	}
	while (*(s1 + s1_length) != '\0')
		s1_length++;
	while (*(s2 + s2_length) != '\0')
		s2_length++;
	con_ptr = malloc((sizeof(char) * (s1_length + s2_length)) + 1);
	if (con_ptr == NULL)
		return (NULL);
	for (i = 0; i < s1_length; i++)
		*(con_ptr + i) = *(s1 + i);
	for (j = 0; j < s2_length; i++, j++)
		*(con_ptr + i) = *(s2 + j);
	*(con_ptr + i) = '\0';
	return (con_ptr);
}
