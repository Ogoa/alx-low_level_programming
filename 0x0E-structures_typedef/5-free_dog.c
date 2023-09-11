#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Dealocates the memory block held by an instance of "struct dog_t"
 * @d: Pointer to an instance of "struct dog_t"
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
