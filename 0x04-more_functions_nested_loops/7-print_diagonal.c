#include "holberton.h"

/**
 * print_diagonal - Prints a semi piramid jejeje a -1 its god.
 * @n: The variable of the program
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
