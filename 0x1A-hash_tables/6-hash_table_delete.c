#include "hash_tables.h"

/**
 * hash_table_delete - Entry point-> It deletes hash table.
 * @ht: input hash table provided to delete
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *htemp;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			htemp = ht->array[x];
			while (htemp)
			{
				free(htemp->key);
				free(htemp->value);
				htemp = htemp->next;
				free(ht->array[x]);
				ht->array[x] = htemp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
