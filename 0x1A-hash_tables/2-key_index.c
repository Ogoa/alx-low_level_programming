#include "hash_tables.h"

/**
 * key_index - Gives the index of a key based off a hash function
 * @key: The key of being mapped to an index
 * @size: The size of the array of the hash table
 *
 * Return: The index in the array where the key will be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
