#include "hash_tables.h"

/**
 * hash_table_set - Entry point-> It adds an element in the hash_table.
 * @ht: input pointer to the hash_table
 * @key: input key of the hash_table
 * @value: input value associated with key
 * Return: 1 (Success), 0 (Failed)
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_temp, *hnode = NULL;
	unsigned long int x;
	char *hvalue;

	if (!ht || !key || (strcmp(key, "") == 0))
		return (0);

	x = key_index((unsigned char *)key, ht->size);
	hvalue = strdup(value);

	if (ht->array[x] != NULL)
	{
		hash_temp = ht->array[x];
		while (hash_temp)
		{
			if (strcmp(hash_temp->key, key) == 0)
			{
				free(hash_temp->value);
				hash_temp->value = hvalue;
				return (1);
			}
			hash_temp = hash_temp->next;
		}
	}
	hnode = malloc(sizeof(hash_node_t));
	if (!hnode)
	{
		free(hvalue);
		return (0);
	}
	hnode->key = strdup(key);
	hnode->value = hvalue;
	hnode->next = ht->array[x];
	ht->array[x] = hnode;

	return (1);
}
