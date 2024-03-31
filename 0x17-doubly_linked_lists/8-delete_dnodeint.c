#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes
 * the node at index "index" of a
 * dlistint_t linked list
 * @head: head of the linked list
 * @index: index of the node to be deleted
 *
 * Return: to return 1 if successful,
 * or -1 if unsuccessful
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *currentNode;
	dlistint_t *previousNode;
	unsigned int idx;

	currentNode = *head;

	if (currentNode != NULL)
		while (currentNode->prev != NULL)
			currentNode = currentNode->prev;

	idx = 0;

	while (currentNode != NULL)
	{
		if (idx == index)
		{
			if (idx == 0)
			{
				*head = currentNode->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				previousNode->next = currentNode->next;

				if (currentNode->next != NULL)
					currentNode->next->prev = previousNode;
			}

			free(currentNode);
			return (1);
		}

		previousNode = currentNode;
		currentNode = currentNode->next;
		idx++;
	}

	return (-1);
}
