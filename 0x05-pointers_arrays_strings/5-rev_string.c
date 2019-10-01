#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 * @s: The pointer for chage the valeu for others variables.
 * Return: Not have.
 */
void rev_string(char *s)
{
	int a, b;
	char c;

	a = 0;
	b = 0;
	for (; s[b] != '\0'; b++)
	{
	}
	b -= 1;
	while (b > a)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;
		b--;
	}
}
