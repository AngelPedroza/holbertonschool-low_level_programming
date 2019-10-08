#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Print summ of number in diag of a matrix.
 * @a: Pint at the begining of the natrix
 * @size: Size of my matrix
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int diag1, diag2, j;

	/*
	 *diag1 = a{(0,0)-1 + (1,1)-5 + (2,2)};
	 *diag2 = a{(0,2) + (1,1) + (2,0)};
	 */
	diag1 = 0;
	diag2 = 0;
	for (j = 0; j < size; j++)
	{
		diag1 = diag1 + *(a + ((size + 1) * j));
	}
	for (j = 0; j < size; j++)
	{
		diag2 = diag2 + *(a + ((size - 1) * j) + (size - 1));
	}
	printf("%d, %d\n", diag1, diag2);
}
