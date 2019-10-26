#include "variadic_functions.h"

/**
 * print_strings - print a string jejej.
 * @separator: My separator of my strings
 * @n: Size of the parameters
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;

	va_start(my_list, n);
	for (i = 0; i < n; i++)
	{
		char *val = va_arg(my_list, char*);

		if (val == NULL)
			printf("(nil)");
		else
			printf("%s", val);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(my_list);
}
