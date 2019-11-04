#include "lists.h"

/**
 * add_nodeint_end - Add a new node in the end of the list
 * @head: My pointer to the nodes of my list.
 * @n: The value of this node.
 * Return: The new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tmp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	newnode->n = n;
	newnode->next = NULL;
	return (newnode);
}
