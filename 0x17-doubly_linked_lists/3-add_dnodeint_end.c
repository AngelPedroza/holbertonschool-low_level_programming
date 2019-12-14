#include "lists.h"

/**
 * add_dnodeint_end - Add a node in the end of the linked list.
 * @head: My head of the list.
 * @n: The data of each new node.
 * Return: The new node if succes or null if not.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	tmp = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (tmp == NULL)
	{
		*head = new_node, new_node->prev = NULL;
		return (new_node);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}
