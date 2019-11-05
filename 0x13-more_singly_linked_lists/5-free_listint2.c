#include "lists.h"

/**
 * free_listint2 - free eahc node wich the address of my head.
 * @head: My double pointer to nodes.
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *ptr2;

	if (*head == NULL)
		return;
	if (*head)
	{
		ptr = *head;
		while (ptr != NULL)
		{
			ptr2 = ptr;
			ptr = ptr->next;
			free(ptr2);
		}
		*head = ptr;
		free(*head);
		free(ptr);
	}
}
