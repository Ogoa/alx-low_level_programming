#include <stdio.h>
#include <ctype.h>

/**
 * main - The entry point of the program
 * Return: Always 0 (Successful exit)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (i < j && j < k)
				{
					putchar(i + 48);
					putchar(j + 48);
					putchar(k + 48);
					if (i == 7 && k == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
