#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - Add two integers
 *
 * @a: First integer.
 * @b: Second integer.
 * Return: The result of the opration
 */
int op_add(int a, int b)
{
	int res;

	res = 0;
	res = a + b;
	return (res);
}

/**
 * op_sub - substract two integers
 *
 * @a: The operator
 * @b: The function associated
 * Return: The result of the opration
 */
int op_sub(int a, int b)
{
	int res;

	res = 0;
	res = a - b;
	return (res);
}

/**
 * op_mul - mul two integers
 *
 * @a: First intiger
 * @b: Second intiger
 * Return: The result of the opration
 */
int op_mul(int a, int b)
{
	int res;

	res = 0;
	res = a * b;
	return (res);
}

/**
 * op_div - div two intigers
 *
 * @a: First intiger
 * @b: Second intiger
 * Return: The result of the opration
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		int res;

		res = 0;
		res = a / b;
		return (res);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - Show the module of two intigers
 *
 * @a: First intiger
 * @b: Second entiger
 * Return: The result of the opration
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		int res;

		res = 0;
		res = a % b;
		return (res);
	}
	printf("Error\n");
	exit(100);
}
