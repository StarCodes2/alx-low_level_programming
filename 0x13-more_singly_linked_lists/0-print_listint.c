#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: poimt to the first node in the list
 *
 * Return: returns the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	listint_t *head = h;

	if (h == NULL)
		return (0);

	while (head)
	{
		printf("%lu\n", head->n);
		num++;
		head = head->next;
	}

	return (num);
}
