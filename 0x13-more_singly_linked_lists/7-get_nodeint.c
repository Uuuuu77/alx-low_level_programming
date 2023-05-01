#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of listint_t list.
 * @head: input first node in the listint_t list
 * @index: input index of the node to be returned
 * Return: pointer to nth node or if not NULL (success)
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth = 0;
	listint_t *temp = head;

	while (temp && nth < index)
	{
		temp = temp->next;
		nth++;
	}

	return (temp ? temp : NULL);
}
