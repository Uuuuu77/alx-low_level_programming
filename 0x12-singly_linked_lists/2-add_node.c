#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Entry point. At the beginning of linked list its add new node.
 * @head: input double pointer to list_t list
 * @str: input string to add to the node
 * Return: address of new element, or NULL if it failed (success)
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int add = 0;

	while (str[add])
		add++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = add;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
