#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if a number has match
 * @array: Array to check
 * @size: Size of my array.
 * @cmp: My pointer to functions
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (size >= 0)
	{
		index = 0;
		for (i = 0; i < size; i++)
		{
			index = cmp(array[i]);
			if (index == 1)
				return (i);
		}
	}
	return (-1);
}
