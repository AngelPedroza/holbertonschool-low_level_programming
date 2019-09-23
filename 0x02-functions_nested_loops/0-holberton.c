#include "holberton.h"
/**
 * main - The body of the program
 *
 * Return: Always is 0 (succes)
 */
int main(void)
{
	char str[9] = "Holberton";
	int c;

	for (c = 0; c < 9; c++)
	{
		_putchar(str[c]);
	}
	_putchar(10);
	return (0);
}
