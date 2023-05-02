#include "lists.h"

/**
 * listint_len -  func  returns  number of elements in a linked listint_t list
 * @h: linked list of type listintt to traver
 *
 * Return: the number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
