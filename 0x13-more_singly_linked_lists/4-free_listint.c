#include "lists.h"

/**
 * free_listint - frees  to linked list
 * @head: the pointer of the 1st node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	{
	listint_t *tp;

	while (head != NULL)
	{
		tp = head->next;
		free(head);
		head = tp;
	}
}
}
