#include "lists.h"

/**
 * sum_dlistint - Entry point-> It sums all data in a list.
 * @head: input pointer to the first node
 * Return: sum of all data in a list (Success)
*/
int sum_dlistint(dlistint_t *head)
{
	int sums = 0;
	dlistint_t *temp;

	if (!head)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sums += temp->n;
		temp = temp->next;
	}

	return (sums);
}
