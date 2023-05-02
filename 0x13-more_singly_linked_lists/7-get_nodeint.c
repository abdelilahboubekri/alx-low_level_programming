#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in list
 * @head: the pointer of the 1st node in the  list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;
	listint_t *temp = head;

	while (temp && node < index)
	{
		temp = temp->next;
		node++;
	}
return (temp ? temp : NULL);
}
