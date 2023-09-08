#include "hash_tables.h"

/**
 * hash_table_print - Entry point-> It prints the hash table.
 * @ht: input hash table to print
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *htemp;
	int space = 0;

	if (!ht)
		exit(0);
	printf("{");

	for (x = 0; x < ht->size; x++)
	{
		htemp = ht->array[x];
		while (htemp)
		{
			if (space == 1)
				printf(", ");
			printf("'%s': '%s'", htemp->key, htemp->value);
			htemp = htemp->next;
			space = 1;
		}
	}
	printf("}\n");
}
