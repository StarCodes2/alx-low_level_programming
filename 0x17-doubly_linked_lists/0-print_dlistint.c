#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked dlistint list.
 * @h: holds the address to the first or a node in the list
 *
 * Return: the number of elements printed
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	size_t size = 0;

	if (h == NULL)
		return (size);
	while (head->prev)
		head = head->prev;

	for (size = 0; head; size++)
	{
		printf("%d\n", head->n);
		head = head->next;
	}

	return (size);
}
