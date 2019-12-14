#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;
	unsigned int i;

	tmp = *h;

	for (i = 0; tmp->next != NULL; i++)
		tmp = tmp->next;
	if (idx > i)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	tmp = *h;
	new_node->n = n;

	for (i = 1; idx > i; i++)
		tmp = tmp->next;

	new_node->next = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}
