#include "lists.h"

/**
 * print_listint - print a list (nodes) of integers
 * @h: Address of each node
 * Return: How many nodes I have.
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h == NULL)
		{
			printf("(nil)\n");
			h = h->next;
		}
		else
		{
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (i);
}
