#include "holberton.h"

/**
 * get_endianness - Check the higher space of memory.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
    int h = 1;
    char *c = (char *)&h;

    if (*c)
	return (1);
    else
	return (0);
}
