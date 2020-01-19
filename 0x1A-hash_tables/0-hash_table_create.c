#include "hash_tables.h"

/**
 * hash_table_create - create the first array
 * @size: The sizeof the array(index) of the hash table
 * Return: The hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	return (ht);
}
