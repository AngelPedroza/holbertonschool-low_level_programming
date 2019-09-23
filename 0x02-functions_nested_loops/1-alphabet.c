#include "holberton.h"

/**
 * print_alphabet - print the alphabet.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		_putchar(c);
	}
	_putchar(10);
	return (0);
}
