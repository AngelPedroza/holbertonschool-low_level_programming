#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - Print all the string after of the match.
 * @s: First string to compare.
 * @accept: String for compare.
 * Return: Return the rest string after of the match.
 */
char *_strpbrk(char *s, char *accept)
{
	char *aux = accept;

	for (; *s; s++)
	{
		for (aux = accept; *aux; aux++)
		{
			if (*s == *aux)
			{
				return (s);
			}
		}
	}
	return (*s == *accept ? s : 0);
}
