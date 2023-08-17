#include "lists.h"

/**
 * add_dnodeint_end - Entry point-> Simply add new node at the end of a list.
 * @head: input pointer to the first node
 * @n: input data to be added
 * Return: added node (Success)
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add, *temp;

	add = malloc(sizeof(dlistint_t));
	if (!add)
		return (NULL);
	add->n = n;
	if (*head == NULL)
	{
		add->prev = NULL;
		*head = add;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = add;
		add->prev = temp;
	}

	return (*head);
}
