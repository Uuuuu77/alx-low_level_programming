#include "lists.h"

/**
 * *add_nodeint_end - Adds new node at the end of listint_t list.
 * @head: input double pointer of listint_t list
 * @n: input new data to be added
 * Return: pointer to new node or NULL if it fails (success)
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);
}
