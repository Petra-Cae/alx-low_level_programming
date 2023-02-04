#include "hash_tables.h"

/**
* hash_table_create - creates a new hash table
* @size: size of the array
*
* Return: pointer to the newly created hash table
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtb;

	if (!size)
		return (NULL);

	hashtb = calloc(1, sizeof(hash_table_t));
	if (!hashtb)
		return (NULL);

	hashtb->size = size;
	hashtb->array = calloc(size, sizeof(hash_node_t *));
	if (!hashtb->array)
	{
		free(hashtb);
		return (NULL);
	}
	return (hashtb);
}
