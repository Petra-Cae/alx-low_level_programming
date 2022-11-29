#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list
* @head: head of the linked list
*
* Return: head node's data else 0
*/
int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *nodenow;
	listint_t *nn;

	if (*head == NULL)
		return (0);

	nodenow = *head;
	headnode = nodenow->n;
	nn = nodenow->next;
	free(nodenow);

	*head = nn;
	return (headnode);
}
