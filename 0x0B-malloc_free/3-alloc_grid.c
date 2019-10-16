#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - print a array
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: doble pointer for the bidimensional array.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	a = (int **)malloc((height * sizeof(int)) * width);

	if (a == NULL)
		return (NULL);

	for (i = 0; i <= height; i++)
	{
		*(a + i) = (int *)malloc(width * sizeof(int));
		for (j = 0; j <= width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
