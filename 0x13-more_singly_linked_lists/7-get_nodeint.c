#include "lists.h"

/**
 * get_nodeint_at_index - gets the address of the nth node in a linked list
 * @head: points to the first node in the list
 * @index: contains the index of the node to return
 *
 * Return: returns an address to the node at the specified index or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; head->next; i++)
	{
		if (i == index)
			return (head);

		head = head->next;
	}

	return (NULL);
}
