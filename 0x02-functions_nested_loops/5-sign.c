#include "holberton.h"

/**
 * print_sign - display a correct sign.
 *
 * @n: Variable of the function.
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	return (n);
}
