#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

listint_t *reverse_listint(listint_t **head)
{
	if (*head)
	{
		listint_t *tmp_prev;
		listint_t *tmp_next;

		tmp_prev = NULL;
		tmp_next = *head;
		while (*head != NULL)
		{
			tmp_next = tmp_next->next;
			head[0]->next = tmp_prev;
			tmp_prev = *head;
			*head = tmp_next;
		}
		*head = tmp_prev;
	}
	return (*head);
}
