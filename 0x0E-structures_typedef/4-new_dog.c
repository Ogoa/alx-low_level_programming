#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Pointer to the name of the dog
 * @age: The age of the dog
 * @owner: Pointer to the name of the dog's owner
 *
 * Return: Pointer to the newly created dog
 * NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog_1;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	dog_1.name = name;
	dog_1.age = age;
	dog_1.owner = owner;
	ptr = &dog_1;
	return (ptr);
}
