#include "holberton.h"
/**
 * _strchr - Print after an ocurrence c
 * @s: My pointer of the string.
 * @c: My ocurrense character.
 * Return: The result of the pointer.
 */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
			break;
	}
	return (*s == c ? s : 0);
}
