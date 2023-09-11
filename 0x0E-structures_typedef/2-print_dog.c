#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the details of "struct dog" instance
 * @d: Pointer to an instance of the type "struct dog"
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
	}
}
