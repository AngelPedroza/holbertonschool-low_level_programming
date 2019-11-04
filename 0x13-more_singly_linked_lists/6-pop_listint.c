#include "lists.h"

/**
 * pop_listint - return the value of a node and delete it.
 * @head: The double pointer to nodes.
 * Return: The value of the delete node.
 */
int pop_listint(listint_t **head)
{
	listint_t *oldnode;
	int value;

	oldnode = *head;
	if (*head == NULL)
		return (0);

	*head = oldnode->next;
	value = oldnode->n;
	free(oldnode);
	return (value);
}
