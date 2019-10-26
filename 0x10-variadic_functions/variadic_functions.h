#ifndef VARIADIC
#define VARIADIC
#include <stdio.h>
#include <stdarg.h>
/**
 * struct select - Structure for other structure
 *
 * @c: The match character
 * @f: The function associated and pass a parameter
 */
typedef struct select
{
	char *c;
	void (*f)(va_list listed);
} op_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
