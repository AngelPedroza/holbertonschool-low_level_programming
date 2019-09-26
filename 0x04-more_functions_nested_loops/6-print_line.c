#include "holberton.h"

/**
 * print_line - print a _, n times.
 * @n: Variable of the program
 * Return: Not have.
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
