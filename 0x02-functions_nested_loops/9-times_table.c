#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int a, b, m;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			m = a * b;
			if (m > 9)
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + m);
			}
		}
		_putchar('\n');
	}
}
