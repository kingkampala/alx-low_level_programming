#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head node
 * @n: element of node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *enode;
	dlistint_t *temp;

	enode = malloc(sizeof(dlistint_t));

	if (!enode)
		return (NULL);
	enode->n = n;
	enode->prev = NULL;
	enode->next = NULL;
	if (!(*head))
	{
		*head = enode;
		enode->prev = NULL;
		return (enode);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = enode;
	enode->prev = temp;
	return (enode);
}
