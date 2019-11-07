#include "holberton.h"

/**
 * print_binary - printme a binary od enteger.
 * @n: My number to convert.
 * Return: Always 0.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
