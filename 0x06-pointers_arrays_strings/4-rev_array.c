#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - print the array in reverse.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, c;

	i = 0;
	n -= 1;
	while (i < n)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
		n--;
		i++;
	}
}
