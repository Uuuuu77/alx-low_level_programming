#include "hash_tables.h"

/**
 * key_index - Entry point-> It gives key index a key.
 * @key: input key provided
 * @size: input size of array of hash table
 * Return: index key (Success)
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) % size;

	return (idx);
}
