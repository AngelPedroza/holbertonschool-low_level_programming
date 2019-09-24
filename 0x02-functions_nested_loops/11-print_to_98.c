#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - check the code for Holberton School students.
 *
 * @n: The variable taht take the valio of the main and put in this program.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
	}
	printf("%d\n", 98);
}
