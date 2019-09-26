#include <stdio.h>
/**
 * main - principal function.
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	unsigned long int a, b, c ,d;

	b = 0;
	c = 1;
	d = 0;
	for (a = 1; a < 50; a++)
	{
		d = b + c;
		printf("%lu,\n",d);
		b = c;
		c = d;
	}
	return (0);
}
