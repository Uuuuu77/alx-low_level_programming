#include "lists.h"

/**
 * *reverse_listint - It's reverses a listint_t linked list.
 * @head: input pointer to the first node of linked list
 * Return: pointer to first node of reversed list (success)
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = next;
	}
	*head = rev;

	return (*head);
}
