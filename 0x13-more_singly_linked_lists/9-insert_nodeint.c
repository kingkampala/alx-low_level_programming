#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @index: index of the list where the new node should be added
 * index starts at 0
 * @head: pointer to head of list
 * @n: new node integer
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tail = *head;
	unsigned int x = 0;

	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = tail;
		*head = new;
		return (new);
	}

	for (x = 0; x < (idx - 1); x++)
	{
		if (!tail || (!(tail->next)))
			return (NULL);
		tail = tail->next;
	}
	new->next = tail->next;
	tail->next = new;

	return (new);
}
