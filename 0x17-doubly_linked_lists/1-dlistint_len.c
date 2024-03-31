#include "lists.h"

/**
 * dlistint_len - function that returns the
 * number of elements in a linked dlistint_t list
 *
 * Return: to return the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int tally;

	tally = 0;

	if (h == NULL)
		return (tally);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		tally++;
		h = h->next;
	}
	return (tally);
}

