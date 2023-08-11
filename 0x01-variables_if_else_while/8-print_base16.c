#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (Successful exit)
 */
int main(void)
{
	for (int i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar(tolower(i + 48));
		else
			putchar(tolower((i - 10) + 'A'));
	}
	putchar('\n');
	return (0);
}
