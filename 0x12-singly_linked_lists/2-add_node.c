#include "lists.h"
#include <string.h>

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: points to the pointer to the head node
* @str: string to be added to the list
*
* Return: the address of the new element, else NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	for (len = 0; str[len]; len++)
		;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
