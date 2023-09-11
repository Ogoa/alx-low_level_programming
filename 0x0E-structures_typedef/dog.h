#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure for a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: Name of the dog's owner
 *
 * Description: This struct defines an object representing a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* ifndef DOG_H */
