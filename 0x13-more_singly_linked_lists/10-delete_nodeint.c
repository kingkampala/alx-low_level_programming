#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * (index) of a listint_t linked list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *king, *tail = *head;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		king = *head;
		*head = (*head)->next;
		free(tail);
		return (1);
	}
	while (fail)
	{
		if (x == index - 1)
		{
			king = tail->next;
			tail->next = king->next;
			free(king);
			return (1);
		}
		tail = tail->next, x++;
	}
	return (-1);
}
