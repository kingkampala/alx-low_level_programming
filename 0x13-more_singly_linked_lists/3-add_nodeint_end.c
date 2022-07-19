#include "lists.h"

/**
 * add_nodeint_end -  adds a new node
 * at the end of a listint_t list
 * @head: @h: pointer to head of list
 * @n: new node integer
 * Return: address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *last = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
		*head = new;
	else
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
