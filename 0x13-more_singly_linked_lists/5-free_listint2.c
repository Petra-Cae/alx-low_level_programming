#include "lists.h"

/**
* free_listint2 - frees a linked list and sets head to NULL
* @head: head of the linked list
*
* Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	while (head != NULL && (*head) != NULL)
	{
		temp = (*head);
		(*head) = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
