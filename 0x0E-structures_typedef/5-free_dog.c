#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free a dog
 * @d: pointer to the dog
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
