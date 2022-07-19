#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head of list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x;
	listint_t *y;

	x = NULL;
	y = NULL;

	while (*head)
	{
		y = (*head)->next;
		(*head)->next; = x;
		x = *head;
		*head = y;
	}
	*head = x;
	return (*head);
}
