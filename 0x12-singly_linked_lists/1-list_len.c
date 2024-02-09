#include "lists.h"

/**
* list_len - function that returns number
* of elements in a list_t list
* @h: singly linked list
* Return: supposed to return the number
* of elements in the list
*/

size_t list_len(const list_t *h)

{
	int count;

	count=0;
	while(h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

