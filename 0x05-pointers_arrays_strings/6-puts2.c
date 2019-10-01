#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 * @str: Pinter for change the value of the variable.
 * Return: Not have.
 */
void puts2(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((a % 2) == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
