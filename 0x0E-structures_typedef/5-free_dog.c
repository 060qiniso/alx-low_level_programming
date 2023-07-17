#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Write a function that frees dogs
 * @d: strct dog to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
