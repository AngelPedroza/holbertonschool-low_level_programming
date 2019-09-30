#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 * @str: The variable for print
 * Return: Always 0.
 */
void _puts(char *str)
{
	int a;

	for (; str[a] != 0; a++)
		_putchar(*(str + a));
	_putchar('\n');
}
