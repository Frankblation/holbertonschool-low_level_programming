#include "hash_tables.h"

/**
 * key_index - Calculates the index of a key in the hash table array.
 * @key: The key string.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;
	unsigned long int index;

	/* Calculate the hash code using the hash_djb2 function */
	hash_code = hash_djb2(key);

	/* Calculate the index using the modulo operator */
	index = hash_code % size;

	return (index);
}
