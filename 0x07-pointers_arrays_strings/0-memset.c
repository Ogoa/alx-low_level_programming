#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory block that is being manipulated
 * @b: The constant byte to be placed in the memory block 'n' times
 * @n: The number of the first bytes to be filled
 *
 * Return: Pointer to the memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;
	int i = 0;

	/*Calculating the number of bytes in the string*/
	while (*(temp + i) != '\0')
		i++;
	if (n < i)
	{
		int pos = 1;
		while (pos <= n)
		{
			*temp_ptr = b;
			temp_ptr++;
			pos++;
		}
	}
	else
	{
		return (s);
	}
	return (s);
}
