#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, res;

	res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
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
