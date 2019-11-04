#include "lists.h"

/**
 * add_nodeint - Add a node in the begin of my list
 * @head: My pointer to nodes
 * @n: The enteger that have each new node.
 * Return: The new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->next = *head;
	*head = newnode;
	newnode->n = n;
	return (newnode);
}
