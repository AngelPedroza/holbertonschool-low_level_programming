#include "holberton.h"

/**
 * _isalpha - The function of print the alphabet.
 *
 * @c: Is the variable of the function
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c > 64 && c < 90)
	return (1);
	else if (c > 97 && c < 122)
	return (1);
	else
	return (0);
}
