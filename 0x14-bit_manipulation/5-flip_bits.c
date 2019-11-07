#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - Give me the flip of bits.
 * @n: My first number.
 * @m: My second number.
 * Return: Times of flip bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int res = 0;
	unsigned long int newbit;

	newbit = n ^ m;

	while (newbit != 0)
	{
		if ((newbit & 1) == 1)
			res += 1;
		newbit >>= 1;
	}
	return (res);
}
