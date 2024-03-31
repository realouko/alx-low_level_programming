#include "lists.h"

/**
 * insert_dnodeint_at_index - function that
 * inserts a new node at a given position
 * @idx: index of the list where the new node
 * will be inserted, starting from 0
 * @n: the value of the new node
 *
 * Return: the address of the new node if successful
 * Return NULL if unsuccessful, or if it's not
 * possible to add new node at index idx
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *head;
	unsigned int currentindex;

	newnode = NULL;
	if (idx == 0)
		newnode = add_dnodeint(h, n);
	else
	{
		head = *h;
		currentindex = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (currentindex == idx)
			{
				if (head->next == NULL)
					newnode = add_dnodeint_end(h, n);
				else
				{
					newnode = malloc(sizeof(dlistint_t));
					if (newnode != NULL)
					{
						newnode->n = n;
						newnode->next = head->next;
						newnode->prev = head;
						head->next->prev = newnode;
						head->next = newnode;
					}
				}
				break;
			}

			head = head->next;
			currentindex++;
		}
	}

	return (newnode);
}

