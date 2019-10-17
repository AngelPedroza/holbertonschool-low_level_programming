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
		;
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
	unsigned int lens1, lens2, j, i, e;

	if (n == 0 || s2 == NULL || s1 == NULL)
	{
		s1 = "";
		s2 = "";
		a = malloc(3);
		return (a);
	}
	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	if (n >= lens2)
		n = lens2;
	a = malloc((lens1 + n + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (j = 0; j < lens1; j++)
		a[j] = s1[j];
	for (i = lens1, e = 0; e <= n; i++, e++)
		a[i] = s2[e];
	return (a);
}
