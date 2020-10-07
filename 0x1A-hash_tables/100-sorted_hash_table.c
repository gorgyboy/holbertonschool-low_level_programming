#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: The size of the array.
 *
 * Return: a pointer to the newly created sorted hash table.
 * If something went wrong, your function should return NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}

/**
 * shash_table_set - adds an element to the sorted hash table. In case
 * of collision, add the new node at the beginning of the list.
 * @ht: The sorted hash table you want to add or update the key/value to.
 * @key: The key. @key can not be an empty string.
 * @value: The value associated with the key. @value can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *temp;
	unsigned long int index;

	if (!ht || !key || !*key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp && strcmp(key, temp->key))
		temp = temp->next;

	if (temp)
	{
		free(temp->value);
		temp->value = strdup(value);
		return (1);
	}
	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->sprev = NULL;
	node->snext = NULL;
	if (!ht->array[index])
	{
		node->next = NULL;
		shash_table_sorted_list_set(ht, node);
		ht->array[index] = node;
		return (1);
	}
	node->next = ht->array[index];
	shash_table_sorted_list_set(ht, node);
	return (1);
}

/**
 * shash_table_sorted_list_set - finds the position to add an element to the
 * sorted hash table sorted list.
 * @ht: The sorted hash table.
 * @node: The node.
 *
 * Return: Nothing.
 */
void shash_table_sorted_list_set(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp = ht->shead;

	if (!ht->shead && !ht->stail)
	{
		shash_table_sorted_list_node_set(ht, node, temp, 0);
		return;
	}
	if (ht->shead == ht->stail)
	{
		if (strcmp(node->key, ht->shead->key) < 0)
			shash_table_sorted_list_node_set(ht, node, temp, 1);
		else
			shash_table_sorted_list_node_set(ht, node, temp, 2);

		return;
	}
	while (temp)
	{
		if (strcmp(node->key, temp->key) < 0)
		{
			node->snext = temp;
			if (!temp->sprev)
				shash_table_sorted_list_node_set(ht, node,
								 temp, 3);
			else
				shash_table_sorted_list_node_set(ht, node,
								 temp, 4);

			return;
		}
		temp = temp->snext;
	}
	shash_table_sorted_list_node_set(ht, node, temp, 5);
}

/**
 * shash_table_sorted_list_node_set - sets the sorted hash table sorted list.
 * @ht: The sorted hash table.
 * @node: The node.
 * @temp: A temporary node.
 * @op: Case to execute.
 *
 * Return: Nothing.
 */
void shash_table_sorted_list_node_set(shash_table_t *ht, shash_node_t *node,
				      shash_node_t *temp, const int op)
{
	switch (op)
	{
	case 0:
		ht->shead = node;
		ht->stail = node;
		break;
	case 1:
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
		break;
	case 2:
		node->sprev = ht->stail;
		ht->stail->snext = node;
		ht->stail = node;
		break;
	case 3:
		temp->sprev = node;
		ht->shead = node;
		break;
	case 4:
		node->sprev = temp->sprev;
		temp->sprev->snext = node;
		temp->sprev = node;
		break;
	case 5:
		node->sprev = ht->stail;
		ht->stail->snext = node;
		ht->stail = node;
		break;
	}
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: The sorted hash table you want to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element,
 * or NULL if @key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

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

/**
 * shash_table_print - prints a sorted hash table. If @ht is NULL,
 * doesn’t print anything.
 * @ht: The sorted hash table.
 *
 * Return: Nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (!ht)
		return;

	temp = ht->shead;
	printf("{");
	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->snext)
			printf(", ");

		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse order.
 * If @ht is NULL, doesn’t print anything.
 * @ht: The sorted hash table.
 *
 * Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (!ht)
		return;

	temp = ht->stail;
	printf("{");
	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->sprev)
			printf(", ");

		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table.
 * @ht: The sorted hash table.
 *
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *temp;

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
