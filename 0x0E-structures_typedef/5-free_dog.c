#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free all malloc of dog.
 * @d: My addres.
 */

void free_dog(dog_t *d)
{
    if (d == NULL)
	return;
    free(d->name);
    free(d->owner);
    free(d);
}
