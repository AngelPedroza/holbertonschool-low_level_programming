#include "holberton.h"
#include <stdio.h>

/**
 * leet - check the code for Holberton School students.
 * @a: The string for change.
 * Return: Return the new char.
 */
char *leet(char *a)
{
	int i, j;
	char s[] = "aAeEoOlLtT";
	char n[] = "4433001177";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (a[i] == s[j])
			{
				a[i] = n[j];
			}
		}
	}
	return (a);
}
