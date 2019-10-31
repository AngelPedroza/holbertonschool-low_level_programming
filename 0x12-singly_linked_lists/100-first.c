#include <stdio.h>
void mymagicpenus(void) __attribute__ ((constructor));
/**
 * mymagicpenus - Only if you rub it well.
 *
 * Return: Always 0.
 */
void mymagicpenus(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
