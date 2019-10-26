#include "variadic_functions.h"

/**
 * printch - print a character
 * @listed: My list like parameters
 * Return: Nothing.
 */
void printch(va_list listed)
{
	printf("%c", va_arg(listed, int));
}
/**
 * printinteger - print a integer
 * @listed: My list like parameters
 * Return: Nothing.
 */
void printinteger(va_list listed)
{
	printf("%d", va_arg(listed, int));
}
/**
 * printfloat - print a float number
 * @listed: My list like parameters
 * Return: Nothing.
 */
void printfloat(va_list listed)
{
	printf("%f", va_arg(listed, double));
}
/**
 * printstring - printa string
 * @listed: My list like parameters
 * Return: Nothing.
 */
void printstring(va_list listed)
{
	char *value = va_arg(listed, char*);

	if (value == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", value);
}
/**
 * print_all - print all the parameters allowed
 * @format: My diferentes parameters inlcude the first one.
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list listed;
	int it1, i;
	char *separador = "";
	op_t ops[] = {
		{'c', printch},
		{'i', printinteger},
		{'f', printfloat},
		{'s', printstring}
	};
	va_start(listed, format);

	it1 = 0;
	while (format[it1] != '\0' && format)
	{
		i = 0;
		while (i < 4)
		{
			if (format[it1] == ops[i].c)
			{
				printf("%s", separador);
				ops[i].f(listed);
				separador = ", ";
			}
			i++;
		}
		it1++;
	}
	printf("\n");
	va_end(listed);
}
