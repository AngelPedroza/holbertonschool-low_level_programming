#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - Give me the length of my string.
 * @s: My string.
 * Return: Len Of my string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);

	}
	s++;
	return (_strlen(s) + 1);
}
/**
 * _compare - check the code for Holberton School students.
 * @s: My string.
 * @l: Len for compares after.
 * Return: Always 0.
 */
int _compare(char *s, int l)
{
	if (*s != s[l])
	{
		return (0);
	}
	else if (*s == '\0')
		return (1);
	return (_compare(s + 1, l - 2));
}
/**
 * is_palindrome - If the string is palindrome make macth.
 * @s: My string.
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int a, res;

	a = _strlen(s);
	res = _compare(s, a - 1);
	return (res);
}
