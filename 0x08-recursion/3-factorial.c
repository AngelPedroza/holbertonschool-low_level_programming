#include "holberton.h"
#include <stdio.h>

/**
 * factorial - Print the result of the a factorial.
 * @n: My factorial number.
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n = n * factorial(n - 1));
}
