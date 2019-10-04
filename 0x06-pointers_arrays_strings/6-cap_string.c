#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - Capitalized all the word.
 * @s: The input string.
 * Return: New char.
 */
char *cap_string(char *s)
{
	char string[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{'
				   , '}'};
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		for (b = 0; string[b] != '\0'; b++)
		{
			if (s[a] == string[b])
			{
				if (s[a + 1] >= 97 && s[a + 1] <= 122)
				{
					s[a + 1] = s[a + 1] - 32;
				}
			}
			else if (a == 0)
			{
				if (s[a] >= 97 && s[a] <= 122)
				{
					s[a] = s[a] - 32;
				}
			}
		}
		a++;
	}
	return (s);
}
