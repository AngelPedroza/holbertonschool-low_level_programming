#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: Variable.
 * Return: Not have.
 */
void puts_half(char *str)
{
	int a, div;

	a = 0;
	for (; str[a] != '\0'; a++)
	{
	}
	if ((a % 2) == 0)
	{
		div = a / 2;
		while (div < a)
		{
			_putchar(str[div]);
			div++;
		}
	}
	else if ((a % 2) != 0)
	{
		div = (a - 1) / 2;
		while (div < a)
		{
			div++;
			_putchar(str[div]);
		}
	}
	_putchar('\n');
}
