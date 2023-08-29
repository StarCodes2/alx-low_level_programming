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
	unsigned int i, len;

	if (head == NULL)
		return (NULL);

	len = get_len(head);
	if (index >= len)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (i == index)
		{
			head = head->next;
			break;
		}
	}

	return (head);
}

/**
 * get_len - get the number of nodes in a list
 * @head: points to the first node in a list
 *
 * Return: returns the number of nodes in the list
 */

size_t get_len(listint_t *head)
{
	size_t len;

	if (head->next)
		len = get_len(head->next);

	return (len + 1);
}
