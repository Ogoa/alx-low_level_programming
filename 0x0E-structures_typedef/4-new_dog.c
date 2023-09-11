#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and stores copies of 'name' and 'owner'
 * @name: Pointer to the name of the dog
 * @age: The age of the dog
 * @owner: Pointer to the name of the dog's owner
 *
 * Return: Pointer to the newly created dog
 * NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int name_length = 0;
	int owner_length = 0;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	name_length = _strlen(name);
	owner_length = _strlen(owner);
	ptr->name = malloc(name_length + 1);
	ptr->owner = malloc(owner_length + 1);
	/* Free memory allocated to ptr if malloc fails */
	if (ptr->name == NULL || ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	_strcpy(ptr->name, name);
	ptr->age = age;
	_strcpy(ptr->owner, owner);
	return (ptr);
}

/**
 * _strlen - Evaluates the length of a string
 * @str: Pointer to the string being evaluated
 *
 * Return: The length of the string
 * NULL if the pointer has a NULL reference
 */
int _strlen(char *str)
{
	int str_length = 0;

	if (str == NULL)
		return (0);
	while (*(str + str_length) != '\0')
		str_length++;
	return (str_length);
}

/**
 * _strcpy - Copies a string from one memory location to another
 * @dest: Pointer to the destination memory block
 * @src: Pointer to the memory block holding the string to be copied
 */
void _strcpy(char *dest, char *src)
{
	int i = 0;

	if (src == NULL)
		return;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
}
