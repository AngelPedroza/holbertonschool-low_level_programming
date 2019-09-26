#include "holberton.h"

/**
 * print_square - Print different square.
 * @size: Size of the squares
 * Return: Not have.
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
