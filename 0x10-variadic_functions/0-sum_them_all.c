#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list list;
		unsigned int i, sum;

		sum = 0;
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(list, int);
		}
		va_end(list);
		return (sum);
	}
return (0);
}
