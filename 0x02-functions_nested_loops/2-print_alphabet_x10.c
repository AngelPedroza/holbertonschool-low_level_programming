#include "holberton.h"

/**
 * print_alphabet_x10 - Print 10 times the alhpabet.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int b;
	int c;

	for (b = 0; b < 10; b++)
	{
		for (c = 97; c < 123; c++)
		{
		_putchar(c);
		}
	_putchar(10);
	}
}
