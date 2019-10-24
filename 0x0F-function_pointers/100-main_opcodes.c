#include <stdio.h>
#include <stdlib.h>
/**
 * main - Take arguments
 * @argc: How many arguments
 * @argv: Array of arrays
 * Return: Always is 0.
 */
int main(int argc, char **argv)
{
	int convertbytes;

	convertbytes = atoi(argv[0]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (convertbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
