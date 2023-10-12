#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a doubly linked list
 * @head: holds the address to a pointer to the first/nth node in the list
 * @n: holds the integer value to be stored in the new node
 *
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h = *head;

	if (h !=  NULL)
		while (h->prev)
			h = h->prev;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = h;

	if (*head != NULL)
		h->prev = new;
	*head = new;

	return (new);
}
