#include "holberton.h"
/**
 * swap_int - Change the value of two variables
 * @a: Variable
 * @b: Variable
 * Return: Not have
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
