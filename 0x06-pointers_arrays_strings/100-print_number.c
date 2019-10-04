#include "holberton.h"
/**
 * print_number - Display a number.
 *
 * Return: Not have cause is void function
 */
void print_number(int n)
{
	int a = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	else if (n == 0)
	{
		_putchar(n + '0');
	}

	while (n / a > 9)
	{
		a = a * 10;
		while (a >= 1)
		{
			_putchar(n / a + '0');
			n = n % a;
			a = a / 10;
		}
	}
	return;
}
