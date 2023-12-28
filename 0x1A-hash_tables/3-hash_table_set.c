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
	unsigned long int i = 0;
	char *value_copy;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	/* Allocate memory for the element being added */
	value_copy = strdup(value);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL || value_copy == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
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
