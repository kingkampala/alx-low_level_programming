#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head of list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start = NULL, *end = NULL;

	while (*head)
	{
		end = (*head)->next;
		(*head)->next; = start;
		start = *head;
		*head = end;
	}
	*head = start;
	return (*head);
}
