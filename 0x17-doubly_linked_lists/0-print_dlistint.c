#include "lists.h"
/**
 * print_dlistint - print a double linked list.
 * @h: Pointer to list
 * Return: How many nodes have the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
