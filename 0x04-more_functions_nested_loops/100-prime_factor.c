#include <stdio.h>
/**
 * main - principal function of the program
 *
 * Return: Always is 0
 */
int main(void)
{
	unsigned long int a, num;

	num = 612852475143;
	for (a = 2; a < num;)
	{
		if ((num % a) == 0)
		{
			num = num / a;
			a = a;
		}
		else
		{
			a++;
		}
	}
	printf("%lu\n", a);
	return (0);
}
