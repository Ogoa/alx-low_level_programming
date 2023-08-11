#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of the program
 * Return: Always 0 (Successful exit)
 */
int main(void)
{
	for (char i = 'z'; i >= 'a'; i--)
		putchar(tolower(i));
	putchar('\n');
	return (0);
}
