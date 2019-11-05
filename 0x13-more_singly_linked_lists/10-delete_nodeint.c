#include "lists.h"

/**
 * delete_nodeint_at_index - Search and delet a node that you want.
 * @head: My pointer to nodes.
 * @index: The node for eliminate.
 * Return: 1 if is succes and -1 if it fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *tmp2;
	unsigned int i = 0;

	if (*head && head)
	{
		tmp = *head;

		if (index == 0)
		{
			*head = tmp->next;
			free(tmp);
		}
		else
		{
			while (i != index - 1)
			{
				tmp = tmp->next;
				if (tmp == NULL)
					return (-1);
				i++;
			}
			tmp2 = tmp->next;
			tmp->next = tmp->next->next;
			free(tmp2);
		}
		return (1);
	}
	return (-1);
}
