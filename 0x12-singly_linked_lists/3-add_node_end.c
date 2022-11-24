#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a new node at the end of a list_t list
* @head: points to the pointer to the head node
* @str: string to be added to the list
*
* Return: the address of the new element, else NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *prevnode;
	unsigned int len = 0;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	if (!str)
		return (NULL);

	newnode->str = strdup(str);

	if (newnode->str == NULL)
		return (NULL);

	while (str[len])
		len++;

	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
		prevnode = *head;
		while (prevnode->next != NULL)
		{
			prevnode = prevnode->next;
		}
		prevnode->next = newnode;
	}
	return (newnode);
}
