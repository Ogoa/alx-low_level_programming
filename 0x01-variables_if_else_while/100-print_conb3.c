#include <stdio.h>
#include <ctype.h>

/**
 * main - The entry point of the program
 * Return: Always 0 (Successful exit)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (i < j)
			{
				putchar(i + 48);
				putchar(j + 48);
				if (i == 8)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
