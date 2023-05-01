#include "lists.h"

/**
 * *insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: input pointer to first node in the list
 * @idx: input index list of new node
 * @n: input data to be inserted in new node
 * Return: pointer to new node and NULL (success)
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int data;
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (data = 0; temp && data < idx; data++)
	{
		if (data == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
