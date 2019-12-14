#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
	new_node->prev = NULL;

	if (tmp == NULL)
	{
		*head = new_node, new_node->next = NULL;
		return (new_node);
	}
	tmp->prev = new_node;
	new_node->next = tmp;
	*head = new_node;
	return (new_node);
}
