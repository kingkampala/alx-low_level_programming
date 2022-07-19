#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: @h: pointer to head of list
 */
void free_listint(listint_t *head)
{
	listint_t *tail;

	while ((tail = head) != NULL)
	{
		head = head->next;
		free(tail);
	}
}
