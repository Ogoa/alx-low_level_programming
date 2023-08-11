#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * status - Determine the string to return based on the last digit of n
 * @n: The number whose last digit is evaluated
 *
 * Return: A string based on the context of the last digit
 */
char *status(int n)
{
	n = n % 10;

	if (n > 5)
		return ("and is greater than 5");
	else if ((n < 6) && (n != 0))
		return ("and is less than 6 and not 0");
	else
		return ("and is 0");
}

/**
 * main - The entry point of the program
 * Return: Always 0 (Successful exit)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d %s\n", n, (n % 10), status(n));
	return (0);
}
