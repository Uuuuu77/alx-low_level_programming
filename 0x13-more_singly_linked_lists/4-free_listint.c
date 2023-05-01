#include "lists.h"

/**
 * free_listint - Entry point. Frees listint_t list.
 * @head: input pointer to listint_t list to be freed
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
