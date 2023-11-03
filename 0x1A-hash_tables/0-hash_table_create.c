#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if something went wrong.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (new_hash_table == NULL)
	{
		return (NULL);
	}

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_hash_table->array[i] = NULL;
	}

	return (new_hash_table);
}
