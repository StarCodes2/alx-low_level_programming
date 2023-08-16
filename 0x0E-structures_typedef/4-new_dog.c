#include <stdlib.h>
#include "dog.h"

/**
 * _len - Counts the length of a string
 * @c: points to a string
 *
 * Return: returns the length of the string
 */

int _len(char *c)
{
	int len = 0, i = 0;

	while (c[i++])
		len++;

	return (len);
}

/**
 * _cpystr - copy's a string from one memory locatikn to another
 * @dest: points to the destination
 * @s: points to the source
 *
 * Return: return a pointer to the copied string
 */

char *_cpystr(char *dest, char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		dest[i] = s[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new struct of type dog_t
 * @name: points to the dog name
 * @age: contains the age of the dog
 * @owner: points to the owner string
 *
 * Return: returns a pointer to the new struct or null if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * _len(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * _len(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _cpystr(dog->name, name);
	dog->age = age;
	dog->owner = _cpystr(dog->owner, owner);

	return (dog);
}
