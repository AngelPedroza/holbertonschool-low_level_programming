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
	int i, a, res;

	res = 0;
	for (i = 1; i < argc; i++)
	{
		for (a = 0; argv[i][a] != '\0'; a++)
		{
			if (argv[i][a] < 47 || argv[i][a] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
			res = res + atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
