#include "lists.h"

/**
 * free_listint2 - free eahc node wich the address of my head.
 * @head: My double pointer to nodes.
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head)
	{
		while (*head)
		{
			ptr = *head;
			*head = ptr->next;
			free(ptr);
		}
	}
}
