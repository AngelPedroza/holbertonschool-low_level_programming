#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a, b;

	if (n < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= n; b++)
			{
				if (b <= (a - 1))
				{
					_putchar(' ');
				}
				else if (b == a)
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
