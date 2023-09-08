#include "hash_tables.h"

/**
 * hash_table_get - Entry point-> It retrieve a value associated with the key.
 * @ht: input hash table to be look into
 * @key: input key to look for
 * Return: value associated with element (Success)
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x;
	hash_node_t *hash_temp = NULL;

	if (!ht || !key || (strcmp(key, "") == 0))
		return (NULL);

	x = key_index((unsigned char *)key, ht->size);
	hash_temp = ht->array[x];
	while (hash_temp)
	{
		if (strcmp(hash_temp->key, key) == 0)
			return (hash_temp->value);
		hash_temp = hash_temp->next;
	}
	return (NULL);
}
