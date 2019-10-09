#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _number(int a , int y)
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
int _sqrt_recursion(int n)
{
	int b;

	b = _number(n, 1);

	return (b);
}
