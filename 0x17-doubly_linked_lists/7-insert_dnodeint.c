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
	dlistint_t *tmp, *ptrcount = *h;
	dlistint_t *tmp2;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	while (ptrcount)
		ptrcount = ptrcount->next, i++;
	if (idx > i)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	tmp = *h;
	new_node->n = n;
	if (idx == 0)
	{
		new_node->prev = NULL, new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i < idx; i++)
	{
		tmp2 = tmp;
		tmp = tmp->next;
	}
	new_node->next = tmp;
	new_node->prev = tmp2;
	tmp2->next = new_node;
	if (tmp)
		tmp->prev = new_node;
	return (new_node);
}
