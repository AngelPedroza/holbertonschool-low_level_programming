#include "hash_tables.h"
/**
 * key_index -  return the index which the key should be save
 * @key: The key of the disctionary
 * @size: The size of the array
 * Return: The index. This index is the value of the size % hash of key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0;

	hash = hash_djb2(key);
	return (hash % size);
}
