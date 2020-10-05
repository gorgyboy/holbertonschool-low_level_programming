#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: The hash table.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht)
		return;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			temp = ht->array[index];
			ht->array[index] = ht->array[index]->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
