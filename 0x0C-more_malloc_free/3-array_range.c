#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints my range in hexa
 * @min: My bottom limit.
 * @max: My top limit.
 *
 * Return: Apointer of ints.
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	size = (max - min) + 1;

	if (min > max)
		return (NULL);

	p = malloc((sizeof(int) * size));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		p[i] = min++;
	}
	return (p);
}
