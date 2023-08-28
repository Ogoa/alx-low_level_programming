#include "main.h"

/**
 * _strspn - Gets the length of the initial segment of a string
 * that is composed entirely of characters from a specified set.
 * @s: The string to be scanned
 * @accept: The specified set of acceptable characters
 *
 * Return: The length of the initial segment of the string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int set_length = 0;
	int segment_length = 0;

	while (*(accept + set_length) != '\0')
		set_length++;
	while (*(s +  i) != '\0')
	{
		int iterator;

		for (iterator = 0; iterator < set_length; iterator++)
		{
			if (*(s + i) == *(accept + iterator))
			{
				segment_length;
				break;
			}
			else
			{
				if (iterator == set_length - 1)
					return (segment_length);
				else
					continue;
			}
		}
		i++;
	}
	return (segment_length);
}
