#include "lists.h"

/**
* listint_len - returns the number of elements in a list
* @h: head of a list
*
* Return: the numbers of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t nodecount = 0;

	while (h != NULL)
	{
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
