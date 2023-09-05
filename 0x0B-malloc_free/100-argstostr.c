#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of your program
 * @ac: The number of arguments passed into the program
 * @av: Pointer to an array of strings containing the arguments passed
 *
 * Return: Pointer to the newly formed string
 * NULL if ac <= 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *new_string;
	int new_string_length = 0;
	int i;
	int counter = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		char *str = *(av + i);

		while (*str != '\0')
		{
			new_string_length++;
			str++;
		}
	}
	new_string_length += ac;
	new_string = malloc((sizeof(char) * new_string_length) + 1);
	if (new_string == NULL)
		return (NULL);
	counter = 0;
	for (i = 0; i < ac; i++)
	{
		char *str = *(av + i);

		while (*str != '\0')
		{
			*(new_string + counter) = *str;
			counter++;
			str++;
		}
		if (i < ac)
		{
			*(new_string + counter) = '\n';
			counter++;
		}
	}
	*(new_string + counter) = '\0';
	return (new_string);
}
