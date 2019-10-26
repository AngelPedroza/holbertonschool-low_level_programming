#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;

	va_start(my_list, n);
	for (i = 0; i < n; i++)
	{
		char *val = va_arg(my_list, char*);

		if ( val == NULL)
			printf("(nil)");

		if (separator == NULL)
			printf("%s", val);

		if (i != n - 1)
			printf("%s%s", val, separator);
		else if (i == n - 1)
			printf("%s\n", val);
	}
}
