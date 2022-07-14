#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string to store
 * Return: address of the new element
 * or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *old;
	size_t king;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	for (king = 0; str[king]; king++)
		;
	new->len = king;
	new->next = NULL;
	old = *head;
	if (!old)
	{
		*head = new;
	}
	else
	{
		while (old->next)
			old = old->next;
		old->next = new;
	}
	return (*head);
}
