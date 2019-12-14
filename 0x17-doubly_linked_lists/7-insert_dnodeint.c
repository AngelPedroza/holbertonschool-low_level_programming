#include "lists.h"

/**
 * insert_dnodeint_at_index - Inset a new node at index position with n value.
 * @h: My list.
 * @idx: Position to insert the new node.
 * @n: The value of the new node.
 * Return: The new node if succes or null if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	tmp = *h;
	new_node->n = n;

	if (*h == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
		tmp = tmp->next;

	new_node->next = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}
