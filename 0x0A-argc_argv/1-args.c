#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed when compiling
 * the program
 * @argc: Number of arguments passed
 * @argv: An array of strings containing the arguments passed
 *
 * Return: Always 0 (Successful exit)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
