#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int namLen, ownerLen, i;
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (d1 == NULL)
		return (NULL);
	namLen = ownerLen = 0;
	while (name[ownerLen++])
		;
	while (owner[ownerLen++])
		;
	d1->name = malloc(namLen * sizeof(d1->name));
		if (d1->name == NULL)
		{
			free(d1);
			return (NULL);
		}
	for (i = 0; i <= namLen; i++)
		d1->name[i] = name[i];
	d1->age = age;
	d1->owner = malloc(ownerLen * sizeof(d1->owner));
		if (d1->owner == NULL)
		{
			free(d1->name);
			free(d1);
			return (NULL);
		}
	for (i = 0; i <= ownerLen; i++)
		d1->owner[i] = owner[i];
	return (d1);
}
