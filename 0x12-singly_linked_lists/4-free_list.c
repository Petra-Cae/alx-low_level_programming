#include "lists.h"

/**
* free_list - frees list_t
* @head: points to the head of list_t
*
* Return: void
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
