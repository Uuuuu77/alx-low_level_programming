#include "lists.h"

/**
 * *add_nodeint - Adds new node at the beginning of a listint_t list.
 * @head: input pointer to listint_t list
 * @n: input data to be printed to the new node
 * Return: pointer to new node or NULL if it fails (success)
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
