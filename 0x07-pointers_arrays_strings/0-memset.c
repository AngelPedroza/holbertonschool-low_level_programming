#include "holberton.h"
#include <stdio.h>

/**
 * _memset - Replace the char value of a pointer in bytes zise
 * @b: the address of memory to print
 * @s: the size of the memory to print
 * @n: Bytes for replace
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len1;

	for (len1 = 0; s != '\0' && len1 < n; len1++)
	{
		s[len1] = b;
	}
	return (s);
}
