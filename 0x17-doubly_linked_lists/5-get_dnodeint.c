#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at a given index from a list
 * @head: points to the first/nth node of the list
 * @index: holds the value to be used to locate the node
 *
 * Return: the address to a node if found or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev)
		head = head->prev;

	for (i = 0; head; i++)
	{
		if (i == index)
			break;

		head = head->next;
	}

	return (head);
}
