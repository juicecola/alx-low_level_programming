#include "dog.h"

/**
 * init_dog - function that prints a struct dog
 * @dog: variable dog
 * @d: dog represented
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
