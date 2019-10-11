#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int a, res;

	res = 1;
	if (argc > 2)
	{
		for(a = 1; a < argc; a++)
		{
			res = res * atoi(argv[a]);
		}
		printf("%d\n", res);
	}
	else
		printf("Error\n");
	return (0);
}
