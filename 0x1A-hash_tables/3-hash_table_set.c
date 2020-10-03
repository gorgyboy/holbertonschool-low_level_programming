#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table. In case of collision,
 * add the new node at the beginning of the list.
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key. @key can not be an empty string.
 * @value: The value associated with the key. @value can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *temp;
	unsigned long int index;

	if (!ht)
		return (0);

	if (!key || !*key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp && strcmp(key, temp->key))
		temp = temp->next;

	if (temp)
	{
		temp->value = (char *)value;
		return (1);
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = (char *)key;
	node->value = (char *)value;
	if (!ht->array[index])
	{
		node->next = NULL;
		ht->array[index] = node;
		return (1);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
