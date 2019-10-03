 #include "holberton.h"
/**
 * _strncat - Copy a string in the final of other string
 * @dest: First string.
 * @src: Second string that print at the final to the first.
 * @n: Size for use of source
 * Return: The first string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b, i;

	a = 0;
	b = 0;
	while (src[b] != '\0')
	{
		b++;
	}
	while (dest[a] != '\0')
	{
		a++;
	}
	b = n;
	for (i = 0; i < b && src[i] != '\0'; i++)
	{
		dest[i + a] = src[i];
	}
	dest[a + i] = '\0';
	return (dest);
}
