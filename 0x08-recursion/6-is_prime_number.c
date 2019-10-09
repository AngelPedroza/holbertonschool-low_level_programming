#include "holberton.h"
#include <stdio.h>

/**
 * _prime - check the code for Holberton School students.
 * @a: my number.
 * @y: my iterator.
 * Return: my bolean number.
 */
int _prime(int a, int y)
{
	if (y != 1)
	{
	if ((a % y) != 0 && (y < a))
	{
		return (_prime(a, y + 1));
	}
	else if ((a % y) == 0 && y == a)
	{
		return (1);
	}
	}
	return (0);
}
/**
 * is_prime_number - Bolean if match with a prime number.
 * @n: My number
 * Return: my bolean number.
 */
int is_prime_number(int n)
{
	int x;

	x = _prime(n, 2);
	return (x);
}
