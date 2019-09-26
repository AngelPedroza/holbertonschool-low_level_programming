#include <stdio.h>
/**
 *main - princpial function for c
 *
 * Return: Always is 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 != 0) && (a % 5 != 0))
		{
			printf("%d", a);
		}
		else
		{
			if (a % 3 == 0)
			{
			printf("Fizz");
			}
			if (a % 5 == 0)
			{
			printf("Buzz");
			}
		}
		if (a != 100)
		{
			printf(" ");
		}
		else
			printf("\n");
	}
	return (0);
}
