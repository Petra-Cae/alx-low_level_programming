#include "lists.h"

/**
* sum_listint - returns the sum of all data(n) of a linked list
* @head: head of the list
*
* Return: sum of all the data in the linked list
*/
int sum_listint(listint_t *head)
{
	listint_t *temp = NULL;
	unsigned int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
