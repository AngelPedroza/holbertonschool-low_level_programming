#include "lists.h"
/**
 * _strlen - Give the length of a string.
 * @str: My string
 * Return: Return the length of the string.
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
/**
 * add_node_end - put a new node next of the actual last node.
 * @head: My address of the nodes.
 * @str: The string for the new node.
 * Return: The new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *tmp;

	newnode = malloc(sizeof(list_t));
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

	if (str == NULL)
	{
		newnode->str = 0;
		newnode->len = 0;
	}
	else
	{
		newnode->str = strdup(str);
		if (newnode->str == 0)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = _strlen(str);
	}
	newnode->next = NULL;
	return (newnode);
}
