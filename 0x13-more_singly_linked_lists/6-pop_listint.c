#include "lists.h"

/**
 * pop_listint - Deletes linked list head node.
 * @head: input pointer to linked list is deleted
 * Return: if empty 0 or data to a head node (success)
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
