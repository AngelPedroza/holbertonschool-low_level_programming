#include "lists.h"

/**
 * list_len - give me the len of muy list of nodes.
 * @h: My pointer to structure.
 * Return: Return the lenthg of the lisked list.
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	for (; h != NULL; i++)
		h = h->next;
	return (i);
}
