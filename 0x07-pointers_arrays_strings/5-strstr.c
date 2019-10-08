#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - Print if the fisrt line match with my second string.
 * @haystack: String to be compare.
 * @needle: String like a parameter to match.
 * Return: The rest of Haystack of 0 if not have match.
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b, count, counth, match, verificador;

	match = 0;
	verificador = 0;
	for (count = 0; needle[count] != '\0'; count++)
	{}
	for (counth = 0; haystack[counth] != '\0'; counth++)
	{}
	for (b = 0; b <= (counth - count); b++)
	{
		for (a = 0; needle[a] != '\0'; a++)
		{
			if (haystack[b + a] == needle[a])
			{
				match = match + 1;
			}
		}
		if (count == match)
		{
			verificador = 1;
				break;
		}
		else
			match = 0;
	}
	return (verificador == 1 ? haystack + b : 0);
}
