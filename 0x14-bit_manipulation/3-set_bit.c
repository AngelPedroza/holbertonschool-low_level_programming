#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - Put 1 (a bit) in the position of index.
 * @n: My number.
 * @index: My bit for change.
 * Return: 1 if is succes of -1 if it fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
