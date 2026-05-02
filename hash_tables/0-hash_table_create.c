#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *t = malloc(sizeof(hash_table_t));

	if (!t)
		return (NULL);
	t->size = size;
	t->array = calloc(size, sizeof(hash_node_t *));
	if (!t->array)
	{
		free(t);
		return (NULL);
	}
	return (t);
}
