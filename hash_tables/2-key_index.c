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

    /*use the djb2 algo to hash the key and take*/
    /* the % w/ the size of the HT to get the index*/
    return (hash_djb2(key) % size);
}