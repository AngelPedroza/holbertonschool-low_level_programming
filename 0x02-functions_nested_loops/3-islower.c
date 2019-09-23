#include "holberton.h"

/**
 * _islower - found the lower characters.
 *
 * @c: c is the variable for the program
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c > 97 && c < 122)
	return (1);
	else
	return (0);
}
