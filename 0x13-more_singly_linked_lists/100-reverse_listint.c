#include "lists.h"

/**
* reverse_listint - reverses a linked list
* @head: head of the list
*
* Return: pointer to first node of the reverse list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode = NULL;
	listint_t *nextnode = NULL;

	while ((*head) != NULL)
	{
		nextnode = (*head)->next;
		(*head)->next = prevnode;
		prevnode = (*head);
		(*head) = nextnode;
	}
	(*head) = prevnode;
	return (*head);
}
