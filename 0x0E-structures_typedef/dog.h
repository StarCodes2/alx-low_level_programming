#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a structure dog with three members
 * @name: Points to the dog's name
 * @age: will hold the dog's age
 * @owner: Will point to the owner's name
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
