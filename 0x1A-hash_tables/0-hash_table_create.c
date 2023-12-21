#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: Address of the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	if (size == 0) /* If size is 0 */
		return (NULL);
	/* Allocating memory to the new table */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	/* Allocating memory for the array of pointers the table has */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* Initializing each index as a NULL pointer */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return new_table;
}
