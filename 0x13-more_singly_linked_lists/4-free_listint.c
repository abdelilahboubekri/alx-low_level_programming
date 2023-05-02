#include "lists.h"

/**
 * free_listint - frees  to linked list
 * @head: the pointer of the 1st node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *head, *node;

	if (head != NULL)
		return;
	node = *head;

	while (head !=NULL)
	{
		temp = head;
		head = head->next;
		free(head);
	}
}
