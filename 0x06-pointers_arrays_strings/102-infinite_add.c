#include "holberton.h"
/**
 * main -
 *
 * Return: Is 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, res, intn1, intn2;

	for (a = 0; n1[a] != '\0' && n2[a] != '\0'; a++)
	{}
	a -= 1;
	b = 0;
	for  (;a >= 0; a--, b++)
	{
		intn1 = n1[a] - '0';
		intn2 = n2[a] - '0';
		res = intn1 + intn2 + acum;
		if (res > 9)
		{
			res = res + '0';
			r[b] = res % 10;
			acum = 1;
		}else
		{
			res = res + '0';
			r[size_r - 1] = res;
			acum = 0;
		}
	}
	return (r);
}
