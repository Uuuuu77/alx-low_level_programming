#include "lists.h"

/**
 * add_dnodeint - Entry point-> It simply add node at the beggining of a list.
 * @head: input pointer to the first node
 * @n: input element to be added
 * Return: Address of the added node (Success)
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add;

	add = malloc(sizeof(dlistint_t));
	if (!add)
		return (NULL);
	add->n = n;
	if (*head != NULL)
	{
		add->next = *head;
		add->prev = NULL;
		(*head)->prev = add;
	}
	*head = add;

	return (*head);
}
