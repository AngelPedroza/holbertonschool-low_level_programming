#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - check the code for Holberton School students.
 *
 * Return: Return the change of the char.
 */
char *rot13(char *a)
{
	int i, j;
	char s[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char n[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (a[i] == s[j])
			{
				a[i] = n[j];
				break;
			}
		}
	}
	return (a);
}
