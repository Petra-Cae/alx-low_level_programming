#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a linked list
* @head: head of the list
* @index: index of the node, starting at 0
*
* Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;
	listint_t *temp;

	temp = head;

	for (a = 0; a < index; a++)
	{
		temp = temp->next;

		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
