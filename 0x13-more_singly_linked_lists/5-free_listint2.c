#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head of list
 * Desc: sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *tail;

	if (!head)
		return;
	while ((tail = head) != NULL)
	{
		(*head) = (*head)->next;
		free(tail);
	}
	*head = NULL;
}
