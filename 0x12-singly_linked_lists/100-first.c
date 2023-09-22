#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_first - Prints a string before the main function is executed
 * Return: Nothing
 */
void print_first(void)
{
	char str1[] = "You're beat! and yet, you must allow,\n";
	char str2[] = "I bore my house upon my back!\n";

	printf("%s%s", str1, str2);
}
