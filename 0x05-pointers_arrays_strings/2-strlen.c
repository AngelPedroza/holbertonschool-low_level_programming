#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Count the elements in a string and print it.
 * @s: The variable that I use make my pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != 0)
	{
		a++;
	}
	return (a);
}
