#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Give the less amount of coins of a number.
 * @argc: Size of my Array of arrays
 * @argv: Position in my main array.
 * Return: Always is 0 if is succes.
 */
int main(int argc, char **argv)
{
	int a, num, div, coins;
	int cent[5] = {25, 10, 5, 2, 1};

	coins = 0;
	if (argc == 2)
	{
		num = atoi(argv[argc - 1]);

		for (a = 0; num > 0;)
		{
			div = num / cent[a];
			coins += div;
			num = num % cent[a];

			if (num % cent[a] != 0)
				a++;
		}
		printf("%d\n", coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
