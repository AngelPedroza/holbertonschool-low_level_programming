#include "lists.h"

/**
 * get_nodeint_at_index - get a node at a index
 * @head: My pointer to nodes.
 * @index: The node that I need.
 * Return: My pointer finded
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (index-- != 0)
	{
		head = head->next;
	}
	if (head->next == NULL)
		return (NULL);
	return (head);
}
