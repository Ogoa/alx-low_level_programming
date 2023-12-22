#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Address of the hash table
 * @key: The key of the item being looked for in the table
 *
 * Return: The value associated with the @key in a key:value pair
 * 	Otherwise NULL if @key is not found in the table
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index; /* Index of the key in the hash table */
	hash_node_t *temp; /* Traversal pointer */

	if (ht == NULL) /* If hash table has a NULL reference */
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, (char *)key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
