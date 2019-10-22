#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print each caracteristics of my dog.
 * @d: My addres for my structure.
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		d->name == NULL ?
			printf("Name: (nil)") : printf("Name: %s\n", d->name);
		d->age == 0 ?
			printf("Age: (nil)") : printf("Age: %f\n", d->age);
		d->owner == NULL ?
			printf("Owner: (nil)") : printf("Owner: %s\n", d->owner);
	}
}
