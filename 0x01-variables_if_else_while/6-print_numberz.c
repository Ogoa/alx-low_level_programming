#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of the function
 * Return: Always 0 (Successful exit)
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
		putchar((i + 48));
	putchar('\n');
	return (0);
}
