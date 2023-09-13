#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Pointer to the memory location of the string being printed
 * @f: Pointer to a function that takes a pointer to a character
 * argument and returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
