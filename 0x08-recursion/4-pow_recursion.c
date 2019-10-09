#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: My number.
 * @y: My power for x.
 * Return: My x power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x = x * _pow_recursion(x, y - 1));
}
