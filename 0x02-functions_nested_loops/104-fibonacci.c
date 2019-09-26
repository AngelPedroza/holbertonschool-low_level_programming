#include <stdio.h>
/**
 * main - principal function.
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	unsigned long int a, b, c, d;

	b = 0;
	c = 1;
	d = 0;
	for (a = 1; a <= 98; a++)
	{
		d = b + c;
		printf(a == 98 ? "%lu\n" : "%lu, ", d);
		b = c;
		c = d;
	}
	return (0);
}
