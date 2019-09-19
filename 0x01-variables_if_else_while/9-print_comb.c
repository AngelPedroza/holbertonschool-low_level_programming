#include <stdio.h>
/**
 * main - The body of the program
 *
 * Return: Always is 0 (succes)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
	putchar(a);
	if (a < 57)
	{
	putchar(',');
	putchar(32);
	}
	}
	putchar('\n');
	return (0);
}
