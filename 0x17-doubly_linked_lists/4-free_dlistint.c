#include "lists.h"

/**
 * free_dlistint - free a linked list.
 * @head: My pointer to the head of the list.
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
