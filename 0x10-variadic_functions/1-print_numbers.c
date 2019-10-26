#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(my_list, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d%s ", va_arg(my_list, int), separator);
		else if (i == n - 1)
			printf("%d\n", va_arg(my_list, int));
	}
}
