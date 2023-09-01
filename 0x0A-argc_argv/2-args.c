#include <stdio.h>
#include "main.h"

/**
 * main - Prints all the arguments the program receives at compilation
 * @argc: The number of arguments received at compilation
 * @argv: An array of strings containing the arguments passed
 *
 * Return: Always 0 (Successful exit)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *(argv + i));
	}
	return (0);
}
