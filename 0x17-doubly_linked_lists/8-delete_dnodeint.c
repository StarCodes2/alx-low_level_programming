#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: points to a pointer to the first/nth node in the list
 * @index: holds an unsigned index value
 *
 * Return: 1 on success or -1 on fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *prev = NULL, *temp = *head;

	if (temp == NULL)
		return (-1);

	while (temp->prev)
		temp = temp->prev;

	for (i = 0; temp; i++)
	{
		if (i == index)
			break;

		if (temp->next == NULL && i < index)
			return (-1);
		prev = temp;
		temp = temp->next;
	}

	if (prev != NULL)
		prev->next = temp->next;

	if (prev == NULL)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
	}

	if (temp->next)
		temp->next->prev = prev;

	free(temp);

	return (1);
}
