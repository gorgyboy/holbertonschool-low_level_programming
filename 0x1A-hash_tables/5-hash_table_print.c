#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table. If @ht is NULL,
 * doesn’t print anything.
 * @ht: The hash table.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, first;
	hash_node_t *temp;

	first = 1;
	printf("{");
	for (index = 0; ht && index < ht->size; index++)
	{
		temp = ht->array[index];
		if (temp && !first && index < ht->size - 2)
			printf(", ");

		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			if (temp->next)
				printf(", ");

			temp = temp->next;
			first = 0;
		}
	}
	printf("}\n");
}
