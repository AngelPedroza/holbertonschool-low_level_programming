#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _strlen(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
		;
    	return (i);
}
char *argstostr(int ac, char **av)
{
	char *a;
	int i, sum, it1, it2;

	sum = 0;
	for (i = 0; i < ac; i++)
	{
		sum = sum + _strlen(av[i]);
	}
	a = malloc((sum + ac) * sizeof(char));
	sum = 0;
	for (it1 = 0; it1 < ac; it1++)
	{
		for (it2 = 0; av[it1][it2] != '\0'; it2++)
		{
			a[sum] = av[it1][it2];
			sum++;
		}
		a[sum] = '\n';
		sum++;
	}
	return (a);
}
