#include "lists.h"

/**
 * free_listint_safe - Frees listint_safe linked list.
 * @h: double pointer to first node to linked list to be freed
 * Return: size of freed linked list(success)
*/
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int b;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		b = *h - (*h)->next;
		if (b > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;

	return (size);
}
