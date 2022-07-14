#include "lists.h"

/**
 * list_len - returns the number of elements
 * in a linked list_t list
 * @h: singly linked list (list_t)
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int x;

	for (x = 0; h; x++)
		h = h->next;
	return (x);
}
