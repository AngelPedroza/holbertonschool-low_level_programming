#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node in a position that i want.
 * @head: My double pointer to each node.
 * @idx: The position that I want insert my new node.
 * @n: The value that I'll give to my new node.
 * Return: My new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *newnode;

	if (*head == NULL)
		return (NULL);
	tmp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		newnode->n = n;
	}
	else
	{
		while (idx-- != 1)
		{
			tmp = tmp->next;
			if (tmp == NULL)
			{
				free(newnode);
				return (NULL);
			}
		}
		newnode->next = tmp->next;
		tmp->next = newnode;
		newnode->n = n;
	}
	return (newnode);
}
