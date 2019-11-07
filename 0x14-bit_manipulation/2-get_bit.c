#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - get the bit in a position.
 * @n: My number.
 * @index: The bit that I want.
 * Return: The bit in this position.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size = sizeof(n) * 8;
	int mod;

	if (index > (size - 1))
		return (-1);
	if (((n >> index) & 1) == 1)
		mod = 1;
	if (((n >> index) & 1) == 0)
		mod = 0;
	return (mod);
}
