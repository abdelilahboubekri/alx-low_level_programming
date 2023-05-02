#include "lists.h"

/**
 * sum_listint - func that returns the sum of all the data (n) of a  list
 * @head: first node in the linked list
 *
 * Return: the resulting sum
 */
int sum_listint(listint_t *head)
{
	int S = 0;
	listint_t *temp = head;

	while (temp)
	{
		S += temp->n;
		temp = temp->next;
	}

	return (S);
}
