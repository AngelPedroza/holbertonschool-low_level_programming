#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - like a malloc but with 2 parameters.
 * @nmemb: My size times necesary.
 * @size: the size of bytes thats I have.
 *
 * Return: A pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;
	int j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (j = 0; j < (nmemb * size); j++)
	{
		p[j] = 0;
	}
	return (p);
}
