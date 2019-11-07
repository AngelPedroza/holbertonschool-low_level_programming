#include <stdio.h>
#include "holberton.h"

/**
 * print_rev - print each bit in recursively.
 * @n: My number to convert.
 * @checker: if my number is > than 0.
 * Return: Always 0.
 */
void print_rev(unsigned long int n, int checker)
{
	if (checker == 1)
	{
		_putchar('0');
		return;
	}

	if (n == 0)
		return;

	print_rev(n >> 1, checker);
	if ((n & 1) == 0)
		_putchar('0');
	if ((n & 1) == 1)
		_putchar('1');
}
/**
 * print_binary - printme a binary od enteger..
 * @n: My number to convert.
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	if (n == '0')
		print_rev(n, 1);
	else
		print_rev(n, 0);
}
