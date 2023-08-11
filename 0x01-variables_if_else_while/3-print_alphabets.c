#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (Successful exit)
 */
int main(void)
{
	for (char i = 'a'; i <= 'z'; i++)
	{
		putchar(tolower(i));
	}
	for (char i = 'a'; i <= 'z'; i++)
		putchar(toupper(i));
	putchar('\n');
	return (0);
}
