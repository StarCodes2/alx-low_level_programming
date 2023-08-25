#include "lists.h"

/**
 * list_len - counts the numbers iof elements in a list
 * @h: points to a node in a list
 */

size_t list_len(const list_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);

	if (h->next)
		len = list_len(h->next);

	return (len + 1);
}
