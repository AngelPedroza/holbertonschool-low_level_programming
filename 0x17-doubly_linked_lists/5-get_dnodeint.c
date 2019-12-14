#include "lists.h"

/**
 * get_dnodeint_at_index - get the data of a node in index position.
 * @head: list head
 * @index: Position of the node.
 * Return: The node or null if fails.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;

	for (i = 0; tmp != NULL;)
	{
		if (i == index)
			break;
		i++;
		tmp = tmp->next;
	}
	return (tmp);
}
