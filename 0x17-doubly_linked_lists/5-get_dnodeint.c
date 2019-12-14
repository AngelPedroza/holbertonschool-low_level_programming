#include "lists.h"

/**
 * get_dnodeint_at_index - get the data of a node in index position.
 * @head: list head
 * @index: Position of the node.
 * Return: The node or null if fails.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index--)
		head = head->next;
	if (head == NULL)
		return (NULL);
	return (head);
}
