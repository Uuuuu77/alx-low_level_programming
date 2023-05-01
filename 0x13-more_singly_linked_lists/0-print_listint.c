#include "lists.h"

/**
 * print_listint - Entry point. Prints all elements of listint_t list.
 * @h: input pointer to listint_t list
 * Return: number of printed nodes (success)
*/
size_t print_listint(const listint_t *h)
{
	size_t all = 0;

	while (h)
	{
		printf("%d\n", h->n);
		all++;
		h = h->next;
	}

	return (all);
}
