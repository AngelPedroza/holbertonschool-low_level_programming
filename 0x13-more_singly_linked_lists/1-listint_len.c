#include "lists.h"

/**
 * listint_len - Give the len of my linked list.
 * @h: The pointes for my nodes
 * Return: How many nodes I have.
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
