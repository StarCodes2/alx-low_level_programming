#include "dog.h"

/**
 * init_dog - Initialize struct dog
 * @d: points to the struct
 * @name: points to a string
 * @age: contains a float
 * @owner: points to a string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
