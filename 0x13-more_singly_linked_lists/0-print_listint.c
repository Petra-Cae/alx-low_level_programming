#include "lists.h"

/**
* print_listint - prints all the elements of a list
* @h: head of the list
*
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int nodecount = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodecount++;
		h = h->next;
	}
	return (nodecount);
}
