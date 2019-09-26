#include "holberton.h"
#include <stdio.h>
/**
 * int _isupper - Print 1 if the letter is upper.
 * @c: Is the variable
 * Return:
 */
int _isupper(int c)
{
	if (c > 64 && c < 90)
		return (1);
	if (c > 96 && c < 122)
		return (0);
	return (c);
}
