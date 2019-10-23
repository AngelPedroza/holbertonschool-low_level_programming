#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - pass for an array
 * @array: the integer to print
 * @size: Size of my array
 * @action: My pointer to functions.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
