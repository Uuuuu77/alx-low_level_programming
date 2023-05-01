#include "lists.h"

/**
 * listint_len - Returns the number of elements in listint_len list.
 * @h: input pointer to listint_len list
 * Return: number of nodes (success)
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
