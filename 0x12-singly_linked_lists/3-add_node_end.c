#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - Entry point. At the end of linked list its add new node.
 * @head: input double pointer to liat_t list
 * @str: input string to add new node
 * Return: address to new element, or NULL if it failed (success)
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int add = 0;

	while (str[add])
		add++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = add;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
