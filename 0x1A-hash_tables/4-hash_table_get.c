#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: The hash table you want to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element,
 * or NULL if @key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
		temp = ht->array[index];
	else
		return (NULL);

	if (temp && !strcmp(temp->key, key))
		return (temp->value);

	do {
		temp = temp->next;
	} while (temp && strcmp(temp->key, key));

	if (temp)
		return (temp->value);

	return (NULL);
}
