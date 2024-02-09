#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
* print_list - function to print all
* elements of the list_t list
* @h: pointer to a list
*
* Return: to returns the total
* number of nodes contained
*/

size_t print_list(const list_t *h)
{
	int count;
	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}


