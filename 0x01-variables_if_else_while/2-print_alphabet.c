#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Successful exit)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(tolower(i));
	}
	putchar('\n');
	return (0);
}
