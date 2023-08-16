#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Releases the memory allocated to struct d
 * and two of its elements
 * @d: Points to the struct to the memory/struct
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);

		if (d->owner != NULL)
			free(d->owner);

		free(d);
	}
}
