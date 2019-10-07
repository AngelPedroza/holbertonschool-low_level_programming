#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - print the lenght of the first string and if the first element not
 * have macth return 0.
 * @s: My first estring.
 * @accept: My string for compare.
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res;
	int a, b;

	res = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				res = res + 1;
				break;
			}
		}
		if (!accept[b])
			break;
	}
	return (res);
}
