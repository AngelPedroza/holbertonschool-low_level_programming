#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _memcpy - prints buffer in hexa
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n: size to replace.
 * Return: Retrun the destiny char.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * _realloc - Return a new pointer with different size.
 * @ptr: My old pointer
 * @old_size: The size of ptr.
 * @new_size: The size of my new pointer.
 * Return: Return a new pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		else
			return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);

	if (new_size < old_size)
	{
		_memcpy(p, ptr, new_size);
	}
	else if (new_size > old_size)
	{
		_memcpy(p, ptr, old_size);
	}
	free(ptr);
	return (p);
}
