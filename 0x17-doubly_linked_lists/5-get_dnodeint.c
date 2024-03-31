#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list
 * @index: index of the node, starting from 0
 * 
 * Return: to return the nth node of the list, or
 * NULL if the node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int indx;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	indx = 0;

	while (head != NULL)
	{
		if (indx == index)
			break;
		head = head->next;
		indx++;
	}

	return (head);
}
