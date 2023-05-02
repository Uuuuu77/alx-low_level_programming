#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts numbers of unique nodes in a linked list.
 * @head: input pointer to first node of linked list to be counted
 * Return: number of unique nodes or if not looped 0 (success)
*/
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *node1, *node2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	node1 = head->next;
	node2 = (head->next)->next;

	while (node2)
	{
		if (node1 == node2)
		{
			node1 = head;
			while (node1 != node2)
			{
				nodes++;
				node1 = node1->next;
				node2 = node2->next;
			}
			node1 = node1->next;
			while (node1 != node2)
			{
				nodes++;
				node1 = node1->next;
			}
			return (nodes);
		}
		node1 = node1->next;
		node2 = (node2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints safely a listint_t linked list.
 * @head: input pointer to first node of linked list to be printed safely.
 * Return: number of nodes in the list (success)
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, safe = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (safe = 0; safe < nodes; safe++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
