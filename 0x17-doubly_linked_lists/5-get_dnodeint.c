#include "lists.h"

/**
 * get_dnodeint_at_index - Entry point-> It gets the node at a given index.
 * @head: input pointer to the first node
 * @index: input position of the index to find
 * Return: node at given index (Success)
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;
	dlistint_t *temp;

	if (!head)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		if (num == index)
			return (temp);
		num++;
		temp = temp->next;
	}

	return (NULL);
}
