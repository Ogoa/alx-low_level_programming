#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Address of the hash table
 *
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bucket;
	hash_node_t *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			bucket = ht->array[i];
			while (bucket)
			{
				temp = bucket->next;
				if (bucket->key)
					free(bucket->key);
				free(bucket->value);
				free(bucket);
				bucket = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
