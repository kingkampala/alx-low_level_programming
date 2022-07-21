#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head of list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x;
	listint_t *y;

	if (!head || !*head)
		return (NULL);
	y = NULL;

	while (!(*head)->next)
	{
		x = (*head)->next;
		(*head)->next = y;
		y = *head;
		*head = x;
	}
	(*head)->next = y;
	return (*head);
}
