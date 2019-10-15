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
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{}
	i--;
	return (i);
}
/**
 * str_concat - concatane two strings.
 * @s1: My first string.
 * @s2: My second string.
 * Return: Only one string with both strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int lens1, lens2, j, i, e;

	if (s1 == NULL || s2 == NULL)
		return (0);

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	a = (char *)malloc((lens1 + lens2) * sizeof(char) + 1);

	for (j = 0; j <= lens1; j++)
	{
		a[j] = s1[j];
	}
	for (i = lens1 + 1, e = 0; e <= lens2; i++, e++)
	{
		a[i] = s2[e];
	}
	return (a);
}