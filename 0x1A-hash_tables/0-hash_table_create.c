#include "hash_tables.h"

/**
 * hash_table_create - Entry point-> It creates a new hash table.
 * @size: input size of the table array
 * Return: pointer to new hash table (Success)
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int x;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->size = size;

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}
	for (x = 0; x < size; x++)
		hash_table->array[x] = NULL;

	return (hash_table);
}
