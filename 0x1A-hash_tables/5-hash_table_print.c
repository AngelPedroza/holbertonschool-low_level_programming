#include "hash_tables.h"
/**
 * hash_table_print - print the real elements of the hash table
 * @ht: The hash table for print
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int idx, count = 0;

	if (!ht)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		tmp = ht->array[idx];
		while (tmp)
		{
			if (count)
				printf(",");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			count = 1;
		}
	}
	printf("}\n");
}
