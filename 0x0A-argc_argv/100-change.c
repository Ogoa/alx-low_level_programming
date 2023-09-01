#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the minimum number of coins to make the change
 * for an amount of money
 * @argc: The number of arguments passed
 * @argv: An array of strings containing the arguments passed
 *
 * Return: Always 0 (Successful exit)
 */
int main(int argc, char *argv[])
{
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (**(argv + 1) < 0)
	{
		printf("0\n");
		return (0);
	}
	change = atoi(*(argv + 1));
	printf("%d\n", get_coins(change));
	return (0);
}

/**
 * get_coins - Evaluates the number of coins that will be needed
 * @n: The amount of money whose change is required
 *
 * Return: The number of coins it requires to give change
 */
int get_coins(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n % 25 == 0)
	{
		n -= 25;
		return (1 + get_coins(n));
	}
	else if (n % 10 == 0)
	{
		n -= 10;
		return (1 + get_coins(n));
	}
	else if (n % 5 == 0)
	{
		n -= 5;
		return (1 + get_coins(n));
	}
	else if (n % 2 == 0)
	{
		n -= 2;
		return (1 + get_coins(n));
	}
	else
	{
		n -= 1;
		return (1 + get_coins(n));
	}
}
