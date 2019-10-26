#include "variadic_functions.h"

/**
 * sum_them_all - sum all the paramenters
 * @n: Size of my parameters.
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum;

	if (n != 0)
	{
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
