#include <stdlib>
#include "dog.h"

/**
 * new_dog - creates a new struct of type dog_t
 * @nmae: points to the dog name
 * @age: contains the age of the dog
 * @owner: points to the owner string
 *
 * Return: returns a pointer to the new struct or null if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
