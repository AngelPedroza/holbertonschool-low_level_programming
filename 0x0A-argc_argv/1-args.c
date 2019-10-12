#include "holberton.h"
#include <stdio.h>
/**
 * main - Print the first argument that's give me (my excutable).
 * @argc: Size of my Array of arrays
 * @argv: Position in my main array.
 * Return: Always is 0 if is succes.
 */
int main(int argc, char **argv __attribute__((unused)))
{
		printf("%d\n", argc - 1);
	return (0);
}
