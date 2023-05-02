#include "lists.h"

/**
 * delete_nodeint_at_index - It's deletes node at index of linked list.
 * @head: input double pointer of first elements in the list
 * @index: input index of list node to be deleted
 * Return: -1 (fails) or 1 (success)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *node = NULL;
	unsigned int ind = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (ind < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		ind++;
	}

	node = temp->next;
	temp->next = node->next;
	free(node);
	return (1);
}
