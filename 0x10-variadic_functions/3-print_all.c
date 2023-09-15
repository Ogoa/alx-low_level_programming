#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything depending on the characters in
 * the format string template
 * @format: Pointer to the memory location holding the format
 * string of what is to be printed
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;

	va_start(args, format);
	while (format && *(format + i) != '\0')
	{
		switch (*(format + i))
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			printf("%s", str);
			break;
		default:
			i++;
			continue;
		}
		if (*(format + i + 1) == '\0')
		{
			i++;
			continue;
		}
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
