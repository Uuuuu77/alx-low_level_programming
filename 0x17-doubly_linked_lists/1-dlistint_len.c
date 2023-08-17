#include "lists.h"

/**
 * dlistint_len - Entry point-> It counts the number of elements in a list.
 * @h: input pointer to the first node
 * Return: length of the list (Success)
*/
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
