#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node.
 * @head: My list.
 * @index: Position for deleta a node.
 * Return: 1 if succes or -1 if it fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head, *ptrcount = *head;
	dlistint_t *tmp2, *tmp3;
	unsigned int i = 0;

	if (*head && head)
	{
		while (ptrcount)
			ptrcount = ptrcount->next, i++;
		if (index > (i - 1))
			return (-1);

		if (index == 0)
		{
			tmp = tmp->next;
			free(*head);
			*head = tmp;
			if (*head != NULL)
				(*head)->prev = NULL;
			return (1);
		}
		for (i = 0; i < index; i++)
		{
			tmp2 = tmp;
			tmp = tmp->next;
		}
		tmp2->next = tmp->next;
		tmp3 = tmp->next;
		if (tmp3)
			tmp3->prev = tmp2;
		free(tmp);
		return (1);
	}
	return (-1);
}
