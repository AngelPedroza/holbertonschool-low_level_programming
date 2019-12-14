#include "lists.h"

/**
 * sum_dlistint - sum all data of each node.
 * @head: My list
 * Return: The sum of all nodes or 0 if not have nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
		sum = sum + head->n, head = head->next;
	return (sum);
}
