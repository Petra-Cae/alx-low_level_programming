#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of the linked list
* @head: head of the linked list
* @n: number of nodes
*
* Return: the address of the new element else NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = NULL;
	listint_t *prevnode = NULL;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	prevnode = (*head);

	if ((*head) == NULL)
	{
		(*head) = newnode;
	}
	else
	{
		while (prevnode->next)
			prevnode = prevnode->next;

		prevnode->next = newnode;
	}
	return (*head);
}
