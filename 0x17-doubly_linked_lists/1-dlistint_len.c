#include "lists.h"

/**
 * dlistint_len - Function that returns 
 * the number of elements in a linked dlistint_t list.
 *
 * @h: the head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n;
	n = 0;

	if (h == NULL)
		return (n);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (n);
}
