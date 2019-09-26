#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - Print 1 if the letter is upper.
 * @c: Is the variable
 * Return: Is the variable for make it'll be 0 or 1
 */
int _isupper(int c)
{
	if (c > 64 && c < 90)
		return (1);
	else
		return (0);
	return (c);
}
