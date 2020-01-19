#include "hash_tables.h"
/**
 * hash_table_delete - free the hash table
 * @ht: The hash table to free
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp1, *tmp2;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp1 = ht->array[i];
		while (tmp1)
		{
			tmp2 = tmp1->next;
			free(tmp1->key);
			free(tmp1->value);
			free(tmp1);
			tmp1 = tmp2;
		}
	}
	free(ht->array);
	free(ht);
}
