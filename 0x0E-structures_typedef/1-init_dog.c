#include "dog.h"

/**
 * init_dog - Initialises a variable of type "struct dog"
 * @d: Pointer to an instance of the struct
 * @name: Pointer to a string value of the name to be assigned
 * @age: Value to assigned as the dog's age
 * @owner: Pointer to a string of the owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
