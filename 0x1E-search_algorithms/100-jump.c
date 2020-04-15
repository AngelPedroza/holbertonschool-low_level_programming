#include "search_algos.h"

/**
 *
 *
 *
 */
int jump_search(int *array, size_t size, int value)
{
    int end = sqrt(size);
    int start = 0;
    int i;

    if (array == NULL)
	return (-1);

    while ((int)size > end)
    {
	printf("Value checked array[%d] = [%d]\n", start, array[start]);

	if (array[end] >= value)
	    break;

	if (array[end] <= value)
	{
	    start = end;
	    end = end + sqrt(size);
	}
    }

    printf("Value found between indexes [%d] and [%d]\n", start, end);

    for (i = start; i <= end && i < (int)size; i++)
    {
	printf("Value checked array[%d] = [%d]\n", i, array[i]);
	if (array[i] == value)
	    return (i);
    }

    return (-1);
}
