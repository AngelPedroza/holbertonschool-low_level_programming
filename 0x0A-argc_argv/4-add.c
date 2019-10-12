#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Sum my digit after the second array.
 * @argc: Size of my Array of arrays
 * @argv: Position in my main array.
 * Return: Always is 0 if is succes.
 */
int main(int argc, char **argv)
{
	int i, res;

	res = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc < 3)
	{
		printf("0\n");
	}
	else
	{
			for (i = 1; i < argc; i++)
			{
				if (*argv[i] > 48 && *argv[i] < 57)
				{
					res = res + atoi(argv[i]);
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		printf("%d\n", res);
	}
	return (0);
}
