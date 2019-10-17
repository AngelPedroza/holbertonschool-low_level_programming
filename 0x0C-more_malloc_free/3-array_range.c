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

	size = (max - min) + 2;

	if (min > max)
		return (NULL);
	if (max == min)
		size = 2;
	p = malloc((sizeof(int) * size));

	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		p[i] = i;
	}
	return (p);
}
