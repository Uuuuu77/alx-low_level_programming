#include "lists.h"

/**
 * sum_listint - Returns the sum of all data(n) listint_t list.
 * @head: input first node in listint_t list
 * Return: sum (success)
*/
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	sum = 0;
	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
