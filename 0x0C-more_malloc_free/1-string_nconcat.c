#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Len of a string.
 * @str: My string.
 * Return: Length.
 */
int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
	{}
	return (i);
}
/**
 * string_nconcat - concatane two strings.
 * @s1: My first string.
 * @s2: My second string.
 * @n: How many bites of the s2 string are been concat.
 * Return: Only one string with both strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int lens1, j, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lens1 = _strlen(s1);
	a = malloc((lens1 + n + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (j = 0, i = 0; j < (lens1 + n); j++)
		if (j < lens1)
		{
			a[j] = s1[j];
		}
		else
		{
			a[j] = s2[i++];
		}
	a[j] = '\0';
	return (a);
}
