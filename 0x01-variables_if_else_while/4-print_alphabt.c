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

	a = 96;
	while (a < 122)
	{
	a++;
	if (a != 101 && a != 113)
		{	
		putchar(a);	
		}
	}
	putchar('\n');
	return (0);
}
