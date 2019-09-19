#include <stdlib.h>
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

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	for (b = 64; b <= 90; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
