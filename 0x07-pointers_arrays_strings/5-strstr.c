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
	int a;

	for (; *haystack; haystack++)
	{
		for (a = 0; needle[a]; a++)
		{
			if (*haystack == needle[0])
			{
				return (haystack);
			}
		}
		if (!needle[0])
			break;
	}
	return (0);
}
