#include "search_algos.h"

/**
 * linear_search - search a value into the array
 * @array: array to search
 * @size: size of the array
 * @value: value to find
 * Return: The index of the value or -1 if it fails
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
