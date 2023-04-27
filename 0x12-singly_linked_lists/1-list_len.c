#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Entry point. Function return number of elements in a linked list.
 * @h: input pointer to the list_t list
 * Return: number of elements in h (success)
*/
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);
}
