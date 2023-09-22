#include "lists.h"

/**
* list_len - function that returns then number
* of elements in a list_t list
* @h: is a singly linked list
* Return: to return the count
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
