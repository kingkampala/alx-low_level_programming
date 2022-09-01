#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to head node
 * Return: sum of all the data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	size_t res = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}
	return (res);
}
