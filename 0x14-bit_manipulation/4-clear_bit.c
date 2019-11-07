#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - clear a bit in a position.
 * @n: My number.
 * @index: My positin to change.
 * Return: 1 if is succes or -1 is it fail.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i = 1;

	if (index > (sizeof(*n) * 8))
		return (-1);
	*n = ~*n;
	i <<= (index);
	*n |= i;
	*n = ~*n;
	return (1);
}
