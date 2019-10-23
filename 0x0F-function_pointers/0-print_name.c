#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name called another function
 * @name: name of the person
 * @f: My pointer to function.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
