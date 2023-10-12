#include "lists.h"

/**
 * dlistint_len - compute the length of a doubly linked list
 * @h: hold the address to the first or nth node in the list
 *
 * Return: length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *head = h;

	if (head == NULL)
		return (size);
	while (head->prev)
		head = head->prev;

	while (head)
	{
		head = head->next;
		size++;
	}

	return (size);
}
