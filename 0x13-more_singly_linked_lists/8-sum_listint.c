#include "lists.h"

/**
 * sum_listint - Sum the each value of each node.
 * @head: My pointer to each node.
 * Return: The final sum.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head)
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}
	return (sum);
}
