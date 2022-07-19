#include "lists.h"

/**
 * add_nodeint - adds a new node
 * at the beginning of a listint_t list
 * @head: @h: pointer to head of list
 * @n: new node integer
 * Return: address of the new element
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
