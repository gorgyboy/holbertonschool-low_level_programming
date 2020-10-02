#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: The size of the array.
 *
 * Return: a pointer to the newly created hash table.
 * If something went wrong, your function should return NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(hash_table_t) * size);
	if (!ht)
		return (NULL);
	else
		return (ht);
}
