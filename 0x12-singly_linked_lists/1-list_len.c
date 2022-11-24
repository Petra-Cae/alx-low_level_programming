#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
* @h: points to the list
*
* Return: the number of elements in the list
*/
size_t list_len(const list_t *h)
{
	size_t numelements = 0;

	while (h)
	{
		numelements++;
		h = h->next;
	}
	return (numelements);
}
