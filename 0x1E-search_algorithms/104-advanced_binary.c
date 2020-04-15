#include "search_algos.h"

/**
 * print_array - print my array
 * @array: The sort array to search
 * @left: min number
 * @right: max number
 * Return: Nothing
 */
void print_array(int *array, int left, int right)
{
    int i;

    for (i = left; i < right; i++)
	printf("%d, ", array[i]);
    printf("%d\n", array[i]);
}

/**
 * binary_search - seacrh dividin the array in two
 * @array: the sort array to search
 * @size: size of the array
 * @value: value to find into the array
 * Return: The index of the value or -1 if it fails
 */
int advanced_binary(int *array, size_t size, int value)
{
    int left = 0;
    int right = (int)size - 1;
    int i = 0;

    while (left < right)
    {
	printf("Searching in array: ");
	print_array(array, left, right);
	i = (left + right) / 2;
	if (array[i] < value)
	    left = i + 1;
	else
	    right = i;
    }

    if (array[i] == value)
	    return (i);
    
    return (-1);
}
