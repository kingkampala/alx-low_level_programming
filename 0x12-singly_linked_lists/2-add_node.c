#include "lists.h"

/**
 * add_node - adds a new node
 * at the beginning of a list_t list
 * @head: head of the list
 * @str: string to store
 * Return: address of the new element
 * or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t old;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	for (old = 0; str[old]; old++)
		;
	new->len = old;
	new->next = *head;
	*head = new;

	return (*head);
}
