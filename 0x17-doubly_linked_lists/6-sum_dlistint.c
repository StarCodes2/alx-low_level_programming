#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the values in a doubly linked list
 * @head: points to the first/nth node in the list
 *
 * Return: the result or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head->prev)
		head = head->prev;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
