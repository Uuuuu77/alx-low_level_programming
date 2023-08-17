#include "lists.h"

/**
 * print_dlistint - Entry point-> It prints all elements in a list.
 * @h: input pointer to the first node
 * Return: number of elements (Success)
*/
size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}
