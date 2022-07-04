#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs from memory block
 * @d: pointer to type struct dog
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
