#include "lists.h"

/**
 * add_dnodeint - function that adds a new
 * node at the beginning of a dlistint_t list
 * @head: head of the list
 * @n: the value of the element
 *
 * Return: to return the address of the new element,
 * or NULL if it failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *h;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);


	newnode->n = n;
	newnode->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}


	newnode->next = h;

	if (h != NULL)
		h->prev = newnode;

	*head = newnode;

	return (newnode);
}

