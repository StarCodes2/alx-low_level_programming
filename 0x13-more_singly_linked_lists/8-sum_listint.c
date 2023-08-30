#include "lists.h"

/**
 * sum_listint - Calculates the sum of all numeric data in the list
 * @head: points to the first node in the list
 *
 * Return: returns the result or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
