#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - Identufy if is a digit.
 * @c: is the variable that I will save my valeu.
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
	return (c);
}
