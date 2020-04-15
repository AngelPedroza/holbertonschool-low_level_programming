#include "search_algos.h"

/**
 * jump_search - search into segments
 * @array: My array
 * @size: Size of the array
 * @value: Value to search
 * Return: The index of value otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int end = sqrt(size);
	int start = 0;
	int i;


	if (array == NULL || size == 0)
		return (-1);

	while (end < size && (int)size > end)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		start = end;
		end = end + sqrt(size);
	}
	printf("Value found between indexes [%d] and [%d]\n", start, end);
	if (end > (size - 1)
	    end = size - 1;

	for (i = start; i <= end && array[i] <= value; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
