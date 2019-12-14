#include "lists.h"
/**
 * print_dlistint - print a double linked list.
 * @h: Pointer to list
 * Return: How many nodes have the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
