#include "variadic_functions.h"

/**
 * print_numbers - print numbers.
 * @separator: My separator of my numbers.
 * @n: Size of the parameters
 * Return: Nothing.
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
			printf("%d%s", va_arg(my_list, int), separator);
		else if (i == n - 1)
			printf("%d\n", va_arg(my_list, int));
	}
}
