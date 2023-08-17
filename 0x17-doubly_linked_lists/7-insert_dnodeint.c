#include "lists.h"

/**
 * dlistint_len - Entry point-> It determines the length of a list.
 * @h: input pointer to the first node
 * Return: Length of a list (Success)
*/
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}

	return (size);
}

/**
 * insert_dnodeint_at_index - Entry point-> It inserts a node at a given index.
 * @h: input pointer to the first node
 * @idx: input position to insert the node
 * @n: input datad to be added
 * Return: address of new node or NULL if not added (Success)
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *insert, *temp, *temp1;
	unsigned int b, size = dlistint_len(*h);

	if (!h)
		return (NULL);
	insert = malloc(sizeof(dlistint_t));
	if (!insert)
		return (NULL);
	if (idx > size)
		return (NULL);
	insert->prev = NULL;
	insert->n = n;
	insert->next = NULL;

	if (*h == NULL)
	{
		*h = insert;
		return (insert);
	}
	if (idx == 0)
	{
		insert->next = *h;
		(*h)->prev = insert;
		*h = insert;
		return (insert);
	}
	else
	{
		temp = *h;
		for (b = 0; b < idx - 1; b++)
			temp = temp->next;
		if (temp->next == NULL)
		{
			temp->next = insert;
			insert->prev = temp;
		}
		else
		{
			temp1 = temp->next;
			temp1->prev = insert;
			temp->next = insert;
			insert->prev = temp;
			insert->next = temp1;
		}
	}

	return (insert);
}
