#include "holberton.h"

/**
 * void print_line(int n) - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (n < 0)
			_putchar('\n');
		else if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
