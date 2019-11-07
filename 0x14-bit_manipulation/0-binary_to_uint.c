#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - Convert a binary in a enteger.
 * @b: My binary number.
 * Return: My decimal number.
 */

unsigned int binary_to_uint(const char *b)
{
	int i, h, pow;
	unsigned int sum;

	pow = 0;
	sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1' || b[i] == '0')
			continue;
		else
			return (0);
	}
	i--;
	for (h = 0; i >= 0; h++, i--)
	{
		if (b[i] == '0')
			pow = 0;
		if (b[i] == '1')
			pow = 1;

		pow = pow << h;
		sum = sum | pow;
	}
	return (sum);
}
