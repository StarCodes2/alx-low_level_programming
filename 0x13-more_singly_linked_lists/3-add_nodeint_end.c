#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the of a list
 * @head: points to an address that contains the address to the first node
 * @n: contains an int
 *
 * Return: returns the address to the new node if successful or NULL if not
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	temp = get_last_node(*head);
	if (temp == NULL)
		*head = new;
	else
		temp->next = new;

	return (new);
}

/**
 * get_last_node - gets the last node in the list
 * @head: points to a node in the list
 *
 * Return: returns the last node in the list
 */

listint_t *get_last_node(const listint_t *head)
{
	listint_t *last;

	if (head == NULL)
		return (NULL);

	last = head;
	if (head->next)
		last = get_last_node(head->next);

	return (last);
}
