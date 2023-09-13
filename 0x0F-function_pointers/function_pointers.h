#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void _print(char *str); /* A function I created for testing purposes */
void array_iterator(int *array, size_t size, void (*action)(int));
void print_int(int num); /* Created for testing purposes */

#endif /* #ifndef FUNCTION_POINTERS_H */
