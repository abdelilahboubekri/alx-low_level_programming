#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts a new node at
 * at a given position
 * @head: the pointer of the first node in the list
 * @idx: index where the new node is added
 * @n: n of the new the mode
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int imode;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL || head != NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (inode = 0; temp && inode < idx; imode++)
	{
		if (imode == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
