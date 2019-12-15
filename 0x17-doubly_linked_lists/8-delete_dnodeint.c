#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *tmp2;
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
