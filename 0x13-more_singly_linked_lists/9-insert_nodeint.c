#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: First node of the list
 * @idx: position where to insert new node
 * @n: new node's data
 *
 * Description: Index starts at 0. It is not possible to add the new node at
 * index idx, do not add the new node and return NULL
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int node_pos;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		if (*head == NULL)
			new_node->next = NULL;
		else
			new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	tmp = *head;
	for (node_pos = 0; node_pos < idx && tmp != NULL; node_pos++)
	{
		if ((node_pos + 1) == idx)
		{
			if (tmp->next == NULL)
				new_node->next = NULL;
			else
				new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
