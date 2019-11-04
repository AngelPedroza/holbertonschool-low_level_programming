#include "lists.h"

/**
 * free_listint - free the nodes.
 * @head: The address of each node.
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_listint(head->next);
	free(head);
}
