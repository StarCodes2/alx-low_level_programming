#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a structure dog with three members
 * @name: Points to the dog's name
 * @age: will hold the dog's age
 * @owner: Will point to the owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

#endif
