#include "holberton.h"
#include <stdio.h>

/**
 * _number - My function for make my conditional of a sqrt.
 * @a: My number to find the sqrs
 * @y: My cont.
 * Return: Result of my operation.
 */
int _number(int a, int y)
{
	if ((y * y) != a && (y * y) < a)
	{
		return (_number(a, y + 1));
	}
	else if ((y * y) == a)
	{
		return (y);
	}
	return (-1);
}
/**
 * _sqrt_recursion - Print my number for sqrt.
 * @n: My nomber for search her sqrt
 * Return: The number.
 */
int _sqrt_recursion(int n)
{
	int b;

	b = _number(n, 1);

	return (b);
}
