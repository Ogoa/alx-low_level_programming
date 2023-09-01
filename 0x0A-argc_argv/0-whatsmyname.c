#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program followed by a new line
 * @argc: Number of arguments passed into the string
 * @argv: An array containing a string of arguments
 *
 * Return: Always 0 (Successful exit)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));
	return (0);
}
