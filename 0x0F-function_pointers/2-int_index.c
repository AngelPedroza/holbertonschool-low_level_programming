#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	index = 0;
	for (i = 0; i < size; i++)
	{
		index = cmp(array[i]);
		if (index == 1)
			break;
	}
	return (i);
}
