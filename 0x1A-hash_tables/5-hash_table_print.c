#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: is the hash table
**/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int sno = 0, a = 0;

	if (ht != NULL)
	{
		printf("{");

		for (sno = 0; sno < ht->size; sno++)
		{
			node = ht->array[sno];

			while (node != NULL)
			{
				if (a != 0)
					printf(", ");
				a = 1;
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
		printf("}\n");
	}
}
