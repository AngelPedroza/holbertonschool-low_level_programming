#include <stdio.h>
/**
 * main - principal function.
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int a, c;

	for (a = 0; a < 1024; a++)
	{
		if (((a % 3) == 0) || ((a % 5) == 0))
		{
			c = c + a;
		}
	}
	printf("%d\n", c);
	return (0);
}
