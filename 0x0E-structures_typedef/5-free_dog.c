#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dog
 * @d: dog to be frees
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
