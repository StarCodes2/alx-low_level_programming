#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given index
 * @h: points to a pointer to the first/nth node in the list
 * @idx: holds an unsigned index value
 * @n: holds the value for the new node
 *
 * Return: address of the new node on success or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *prev = NULL, *temp = *h;

	if (temp == NULL && idx > 0)
		return (NULL);

	if (temp != NULL)
	{
		while (temp->prev)
			temp = temp->prev;

		for (i = 0; temp; i++)
		{
			if (i == idx)
				break;

			if (temp->next == NULL && i < (idx - 1))
				return (NULL);
			prev = temp;
			temp = temp->next;
		}
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = prev;
	new->next = temp;

	if (prev == NULL)
		*h = new;
	else
		prev->next = new;

	if (temp != NULL)
		temp->prev = new;

	return (new);
}
