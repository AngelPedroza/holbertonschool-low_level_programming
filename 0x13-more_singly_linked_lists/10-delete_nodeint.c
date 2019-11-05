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
	int index2 = index;

	if (*head != NULL)
	{
		tmp = *head;
		tmp2 = *head;
		if (tmp->next == NULL)
		{
			*head = NULL;
			free(tmp);
			return (1);
		}
		else
		{
			if (index == 0)
			{
				*head = tmp->next;
				free(tmp);
			}
			else
			{
				while (index-- != 0)
				{
					tmp = tmp->next;
					if (tmp == NULL)
						return (-1);
				}
				while (index2-- != 1)
				{
					tmp2 = tmp2->next;
					if (tmp == NULL)
						return (-1);
				}
				tmp2->next = tmp->next;
				free(tmp);
			}
			return (1);
		}
	}
	return (-1);
}
