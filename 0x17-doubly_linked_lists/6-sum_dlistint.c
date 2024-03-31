#include "lists.h"

/**
 * sum_dlistint - function that returns the sum
 * of all the data(n) of a dlistint_t linked list
 * @head: head of the linked list
 * 
 * Return: sum of the data in linked list,
 * or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int datasum;

	datasum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			datasum += head->n;
			head = head->next;
		}
	}

	return (datasum);
}
