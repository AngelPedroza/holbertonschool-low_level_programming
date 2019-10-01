#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print an array.
 * @a: a is the variable for the array.
 * @n: size of the array.
 * Return: Not have.
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
	        if (b == (n - 1))
		{
			printf("%d\n", a[b]);
		}
		else
		{
			printf("%d, ", a[b]);
		}
	}
		if (n == 0 || n < 0)
		{
			printf("\n");
		}
}
