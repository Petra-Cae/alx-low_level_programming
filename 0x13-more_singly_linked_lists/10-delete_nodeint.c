#include "lists.h"

/**
* delete_nodeint_at_index - deletes node at the index of the list
* @head: head of the list
* @index: index of node that should be deleted
*
* Return: 1 (success) else -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *pren;
	listint_t *nnode;

	if (head == NULL)
		return (-1);

	pren = (*head);

	if (index == 0)
	{
		if (pren == NULL)
			return (-1);
		pren = (*head);
		(*head) = (*head)->next;
		free(pren);
		return (1);
	}

	for (a = 1; a < index; a++)
	{
		if (pren == NULL)
			return (-1);

		pren = pren->next;
	}

	nnode = pren->next;
	pren->next = nnode->next;
	free(nnode);

	return (1);
}
