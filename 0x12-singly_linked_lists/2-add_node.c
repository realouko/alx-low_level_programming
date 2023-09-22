#include "lists.h"

/**
* add_node - function that adds
* a node at the start
* of a list_t list
* @head: this is the
* head of list_t
* @str: string to be stored
* in the list
* Return: to return the address
* of the head of linked list
*/

list_t *add_node(list_t **head, const char *str)

{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *head;
	*head = new;
	return (*head);
}

