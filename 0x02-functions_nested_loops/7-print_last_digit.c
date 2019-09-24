#include "holberton.h"

/**
 * print_last_digit - the function.
 *
 * @r: Variable of the function.
 *
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	int m;

	m = r % 10;
	if (m <= 0)
	m = m * -1;
	_putchar(m + '0');
	return (m);
}
