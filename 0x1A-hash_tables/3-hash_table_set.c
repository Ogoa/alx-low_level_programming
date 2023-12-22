#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Address of the hash table
 * @key: String containing the key of the item being inserted into the table
 * @value: The value of the item in the key:value pair
 *
 * Return: 1 on success, otherwise 0 on failure
 * Description: In case of collision, this function adds the new node at the
 * beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index; /* Hash value returned by the hash function */

	if (ht == NULL || key == NULL) /**
			  * Handle a NULL pointer to the hash table
			  * and an empty @key string
			  */
		return (0);
	/* Allocate memory for the element being added */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = strdup(value);
	new_node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
