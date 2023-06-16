#include "lists.h"

/**
 * free_dlistint - Function that frees a dlistint_t list.
 *
 * @head: The head of the list
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ch;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((ch = head) != NULL)
	{
		head = head->next;
		free(ch);
	}
}
