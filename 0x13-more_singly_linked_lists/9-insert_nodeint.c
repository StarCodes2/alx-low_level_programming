#include "lists.h"

/**
 * insert_nodeint_at_index - Insert's a new node into a list at a given index
 * @head: Points to an address that contains the address to the first node
 * @idx: Contains the index
 * @n: Contains the data the new node will hold
 *
 * Return: Returns an address to the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;

	if (*head == NULL && idx != 0)
		return (NULL);

	for (i = 0; *head; i++)
	{
		if ((idx == 0 && i == 0) || (i == (idx - 1)))
			break;
		*head = (*head)->next;
	}

	if (((idx - 1) > i) && *head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if ((*head)->next != NULL)
		new->next = (*head)->next;

	if (idx == 0)
		*head = new;
	else
		(*head)->next = new;

	return (new);
}
