#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash_table
 * @ht: Pointer to the hash table
 *
 * Return: Nothing
 * Description: Prints the key/value in the order that they appear
 * in the array of hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (flag == 1)
				printf(", ");
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			flag++;
		}
	}
	printf("}\n");
}
