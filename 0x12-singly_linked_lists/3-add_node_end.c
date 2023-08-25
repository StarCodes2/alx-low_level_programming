#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list
 * @head: points to a pointer that points to a list
 * @str: points to a string
 *
 * Return: returns an address to the first node in the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *new = malloc(sizeof(list_t));
	list_t *last;

	if (new == NULL)
		return (NULL);

	s = strdup(str);

	if (s == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = s;
	new->len = len(s);
	new->next = NULL;

	last = get_last_node(*head);
	last->next = new;

	return (*head);
}

/**
 * len - counts the length of a string
 * @s: points to a string
 *
 * Return: returns the length of the string
 */

size_t len(char *s)
{
	int i;
	size_t len = 0;

	for (i = 0; s[i]; i++)
		len++;

	return (len);
}

/**
 * get_last_node - gets the last node in a list
 * @h: points to the first node in the list
 *
 * Return: returns the address of the last node
 */

list_t get_last_node(list_t *h)
{
	list_t *nodes;

	if (h->next)
		node = get_last_node(h->next);
	else
		node = h;

	return (node);
}
