#include "hash_tables.h"
/**
 * hash_table_set - set a new node for the hash table
 * @ht: Head of the hash table
 * @key: The key of the element in the hash table
 * @value: Value for change or set in the value of key
 * Return: 1 if succes, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;

	if (key == NULL || value == NULL)
		return (0);

	if (ht == NULL || ht->array == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	hash_handler(ht, node);

	return (1);
}

/**
 * hash_handler - set the new node in the hash table
 * @ht: The hash table head
 * @node: The node for set in the hash table
 * Return: Nothing
 */

void hash_handler(hash_table_t *ht, hash_node_t *node)
{
	unsigned long int idx = 0;
	hash_node_t *tmp = NULL;

	idx = key_index((unsigned char *)node->key, ht->size);
	tmp = ht->array[idx];

	if (ht->array[idx] != NULL)
	{
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, node->key) == 0)
			{
				tmp->value = strdup(node->value);
				free_nodes(node);
				return;
			}

			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			tmp->next = ht->array[idx];
			ht->array[idx] = node;
			node->next = NULL;
		}
	}
	else
	{
		ht->array[idx] = node;
		node->next = NULL;
	}
}

/**
 * free_nodes - free the elements of a specific node
 * @node: The node for free
 * Return: Nothing
 */
void free_nodes(hash_node_t *node)
{
	free(node->value);
	free(node->key);
	free(node);
}
