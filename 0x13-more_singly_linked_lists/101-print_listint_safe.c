#include "lists.h"

/**
 * print_listint - print a list (nodes) of integers
 * @h: Address of each node
 * Return: How many nodes I have.
 */
size_t print_listint_safe(const listint_t *head)
{
	int i;
	listint_t *tmp;

	if (head)
	{
		tmp = (void *)head;
		for (i = 0; head != NULL; i++)
		{
			head = head->next;
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			if (tmp < head)
			{
				i++;
				printf("-> [%p] %d\n", (void *)head, head->n);
				break;
			}
			tmp = tmp->next;
		}
		return (i);
	}
	exit(98);
}
