#include "hash_tables.h"
/**
 * hash_table_print - print the real elements of the hash table
 * @ht: The hash table for print
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int idx, count = 0, count2 = 0;

	if (!ht)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			count++;
		}
	}

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			count2++;
			tmp = ht->array[idx];
			if (count2 == count)
				printf("'%s': '%s'", tmp->key, tmp->value);
			else
				printf("'%s': '%s', ", tmp->key, tmp->value);
		}
	}
	printf("}\n");
}
