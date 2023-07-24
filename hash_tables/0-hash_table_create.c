#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the array for the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL if an error occurs.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	/* Allocate memory for the hash table structure */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Allocate memory for the array of pointers to hash_node_t */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table); /* Free the previously allocated memory */
		return (NULL);
	}

	/* Initialize all elements of the array to NULL */
	for (unsigned long int i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->size = size;

	return (new_table);
}
