#include "lists.h"

/**
 * print_listint - func prints all the elements of a listint_t list.
 * @h: it's pointer to 1st node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h);
{
	size_t inodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		inodes++;
	}
	return (inodes);
}
