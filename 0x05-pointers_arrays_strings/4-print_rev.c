#include "holberton.h"

/**
 * print_rev - Print a string in reverse.
 * @s: The variable for print
 * Return: Not have.
 */
void print_rev(char *s)
{
	int a;

	while (s[a] != 0)
	{
		a++;
	}
	while (a > 0)
	{
		a--;
		_putchar(s[a]);
	}
	_putchar('\n');
}
