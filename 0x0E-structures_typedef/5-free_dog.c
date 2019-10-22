#include <stdio.h>
#include "dog.h"

/**
 * free_dog - Free all malloc of dog.
 * @d: My addres.
 * Return: Always 0.
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
