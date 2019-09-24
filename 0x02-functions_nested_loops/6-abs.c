#include "holberton.h"

/**
 * _abs - Put the absolute valeu of a number.
 *
 * @i: Variable of the function.
 *
 * Return: Always 0.
 */
int _abs(int i)
{
	if (i < 0)
	i = i * -1;
	return (i);
}
