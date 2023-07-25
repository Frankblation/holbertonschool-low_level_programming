#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key string. (Key cannot be an empty string)
 * @value: The value associated with the key. (Value must be duplicated)
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	/* Check if the hash table, key, or value is NULL */
	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	/* Calculate the index for the given key using key_index function */
	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists in the hash table */
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			/* Key already exists, update the value and return 1 */
			free(current_node->value); /* Free the old value */
			current_node->value = strdup(value); /* Duplicate the new value */
			if (current_node->value == NULL)
				return (0); /* Return 0 if strdup fails */
			return (1);
		}
		current_node = current_node->next;
	}

	/* Key does not exist, create a new node and add it at the beginning of the list */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key); /* Duplicate the key */
	if (new_node->key == NULL)
	{
		free(new_node); /* Free the new_node if strdup fails */
		return (0);
	}

	new_node->value = strdup(value); /* Duplicate the value */
	if (new_node->value == NULL)
	{
		free(new_node->key); /* Free the key if strdup fails */
		free(new_node); /* Free the new_node if strdup fails */
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}