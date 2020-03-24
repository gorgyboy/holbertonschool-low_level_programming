#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list, where index is the index of the node that should be deleted.
 * Index starts at 0
 * @head: begining of the list
 * @index: node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current;
	unsigned int node_idx;

	current = *head;
	if (index == 0)
	{
		if (*head != NULL)
		{
			*head = (*head)->next;
			free(current);
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	previous = current;
	for (node_idx = 0; node_idx <= index && current != NULL; node_idx++)
	{
		if (node_idx == index)
		{
			if (current->next == NULL)
				previous->next = NULL;
			else
				previous->next = current->next;
			free(current);
			return (1);
		}
		previous = current;
		current = current->next;
	}
	return (-1);
}
