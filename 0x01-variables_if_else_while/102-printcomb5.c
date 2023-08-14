#include <stdio.h>
#include <ctype.h>

/**
 * main - The entry point of the program
 * Return: Always 0 (SUccessful exit)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(' ');
			putchar(' ');
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
