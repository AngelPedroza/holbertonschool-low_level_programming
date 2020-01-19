#include "hash_tables.h"
/**
 * hash_table_get - get the value of key
 * @ht: The hash table to read
 * @key: The key to find him value
 * Return: The value of a key, otherwise null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	if (ht->array[idx] != NULL)
	{
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				return (tmp->value);
			}
			tmp = tmp->next;
		}
		if (!tmp)
		{
			return (NULL);
		}
	}
	return (NULL);
}
