#include <stdio.h>
#include "lists.h"

/**
 * print_list - Entry point. Prints all linked list elements.
 * @h: input pointer to list_t to be printed
 * Return: number of printed nodes (success)
*/
size_t print_list(const list_t *h)
{
	size_t all = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		all++;
	}

	return (all);
}
