#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compare character for character betwen two string and if find a
 * diferente character , minus both chracters and convert in ascii.
 * @s2: String to kill
 * @s1: string to replance
 * Return: The string replaced
 */
int _strcmp(char *s1, char *s2)
{
	int a, res;

	res = 0;
	for (a = 0; s1[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			res = s1[a] - s2[a];
			break;
		}
	}
	return (res);
}
