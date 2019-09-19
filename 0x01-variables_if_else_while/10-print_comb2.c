#include <stdio.h>
/**
 * main - The body of the program
 *
 * Return: Always is 0 (succes)
 */
int main(void)
{
	int a;
	int b;

	b = 48;
	while (b < 58)
	{
	a = 48;
		while (a < 58)
		{
		putchar(b);
		putchar(a);
			if (b != 57 || a != 57)
			{
			putchar(',');
			putchar(32);
			}
		a++;
		}
	b++;
	}
	putchar('\n');
	return (0);
}
