#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: points to the first node in the list
 *
 * Return: returns the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);

	printf("%d\n", h->n);

	if (h->next)
		num = print_listint(h->next);

	return (num + 1);
}
