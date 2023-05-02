#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: the pointer the 1st element of the list
 * 
 * Return:  the inside elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (!head || !*head)
		return (0);

	node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (node);
}
