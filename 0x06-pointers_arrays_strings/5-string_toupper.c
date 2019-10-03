#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - check the code for Holberton School students.
 * @s: the char that change all the lowers in uppers
 * Return: The new char.
 */
char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 97 && s[a] <= 122)
		{
			s[a] = s[a] - 32;
		}
	}
	return (s);
}
