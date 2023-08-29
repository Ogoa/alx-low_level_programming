#include "main.h"

/**
 * _strstr - Locates the occurrence of a substring
 * @haystack: The string to be serached for the occurrence of
 * the specified substring
 * @needle: The substring being searched for in 'haystack'
 *
 * Return: Pointer to the beginning of the located substring
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp_ptr = haystack;
	int needle_length = 0;

	while (*(needle + needle_length) != '\0')
		needle_length++;
	while (*temp_ptr != '\0')
	{
		if (*(temp_ptr) == *needle)
		{
			int i = 0;

			while ((*(temp_ptr + i) != '\0') && (*(needle + i) != '\0'))
			{
				if (*(temp + i) == *(needle + i))
				{
					i++;
					continue;
				}
				else
				{
					break;
				}
			}
			if (*(temp_ptr + i) == '\0')
				return (temp_ptr);
		}
		temp_ptr++;
	}
	return (0);
}
