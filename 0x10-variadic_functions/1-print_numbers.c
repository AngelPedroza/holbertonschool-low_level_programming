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

	va_start(my_list, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(my_list, int));
		else if (i < n - 1 && separator != NULL)
			printf("%d%s", va_arg(my_list, int), separator);
	}
	printf("\n");
	va_end(my_list);
}
