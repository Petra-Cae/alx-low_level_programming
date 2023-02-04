#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: is the hash table we want to look into
* @key: the key we are looking for
*
* Return: value associated with the element, or NULL
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ndk;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	ndk = ht->array[index];

	for (; ndk != NULL; ndk = ndk->next)
	{
		if (strcmp(ndk->key, key) == 0)
			return (ndk->value);
	}
	return (NULL);
}
