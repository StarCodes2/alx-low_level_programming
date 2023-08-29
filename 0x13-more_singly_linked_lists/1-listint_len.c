#include "lists.h"

/**
 * listint_len - counts the number of nodes in a list
 * @h: points to the first node in the list
 *
 * Return: returns the number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);

	if (h->next)
		len = listint_len(h->next);

	return (len + 1);
}
