#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - Print an array of 2 dimensions.
 * @a: My array
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int c, b;

	for (c = 0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[c][b]);
		}
		_putchar('\n');
	}
}
