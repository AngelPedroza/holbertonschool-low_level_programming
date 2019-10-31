#include "lists.h"

/**
 * _strlen - Give me the length of a string.
 * @str: My string.
 * Return: the size of the estring
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * add_node - add a new node for my liked list.
 * @head: My pointer to the first node.
 * @str: My string for make a node.
 * Return: my new node for add.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	if (str == NULL)
	{
		char *p = "(nil)";

		newnode->str = strdup(p);
		newnode->len = 0;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	else
	{
		newnode->str = strdup(str);
		newnode->len = _strlen(str);
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	return (NULL);

}
