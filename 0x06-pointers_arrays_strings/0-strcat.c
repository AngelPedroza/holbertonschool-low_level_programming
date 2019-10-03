#include "holberton.h"
/**
 * _strcat - Copy a string in the final of other string
 * @dest: First string.
 * @src: Second string that print at the final to the first
 * Return: The first string.
 */
char *_strcat(char *dest, char *src)
{
	int a, b, origin;

	a = 0;
	b = 0;
	while (src[b] != '\0')
		b++;
	while (dest[a] != '\0')
		a++;
	for (origin = 0; origin < b; origin++)
	{
		dest[origin + a] = src[origin];
	}

	return (dest);
}
