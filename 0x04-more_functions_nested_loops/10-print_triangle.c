#include "holberton.h"

/**
 * print_triangle - Prints a semi piramid jejeje a -1 its god.
 * @size: The variable of the program
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a, b;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if (b <= (size - a))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
