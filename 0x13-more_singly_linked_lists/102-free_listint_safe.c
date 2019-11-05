#include "lists.h"

/**
 * free_listint_safe - print a list (nodes) of integers.
 * @h: Address of each node
 * Return: How many nodes I have.
 */
size_t free_listint_safe(listint_t **h)
{
	int i = 0;
	listint_t *tmp;

	if (h)
	{
		tmp = *h;
		for (i = 0; *h != NULL; i++)
		{
			*h = (*h)->next;
			if (tmp < *h)
			{
				i++;
				free(tmp);
				*h = NULL;
				break;
			}
			free(tmp);
			tmp = *h;
		}
	}
	return (i);
}
