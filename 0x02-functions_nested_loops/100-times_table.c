#include "holberton.h"
/**
 * print_times_table - Print a multiplicate table.
 * @n: Variable with the input for table times.
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int a, b, m;

	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			m = a * b;
			if (m > 9 && m <= 99)
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);			}
			else if (m <= 9)
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + m);			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');				}
			_putchar('0' + m / 100);
			_putchar('0' + ((m % 100) / 10));
			_putchar('0' + m % 10);			}	}
		_putchar('\n');	}	}
}
