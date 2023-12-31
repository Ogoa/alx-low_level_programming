#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if s1 matches s2
 * integer less than 0 if s1 is less than s2
 * integer greater than 0 if s1 is greater than s2
 * The difference in ASCII values of the first two non-matching characters
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while ((*(s1 + i) != '\0') || (*(s2 + i) != '\0'))
	{
		if ((*(s1 + i) != '\0') && (*(s2 + i) != '\0'))
		{
			if (*(s1 + i) == *(s2 + i))
			{
				i++;
				continue;
			}
			else
			{
				diff = (*(s1 + i) - *(s2 + i));
				break;
			}
		}
		else
		{
			diff = (*(s1 + i) - *(s2 + i));
			break;
		}
		i++;
	}
	return (diff);
}
