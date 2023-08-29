#include "lists.h"

/**
 * pop_listint - Deletes the first node of a linked list
 * @head: points to the address that contains the address to the first node
 *
 * Return: returns the deleted nodes data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head->next;
	n = *head->n;

	free(*head);
	*head = temp;

	return (n);
}
