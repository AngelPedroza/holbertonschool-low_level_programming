#include "lists.h"

/**
 * get_nodeint_at_index - get a node at a index
 * @head: My pointer to nodes.
 * @index: The node that I need.
 * Return: My pointer finded
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (NULL);
	while (tmp->next != NULL)
	{
		if (i == index)
			break;
		tmp = tmp->next;
		i++;
	}
	if (i < index)
		return (NULL);
	return (tmp);
}
