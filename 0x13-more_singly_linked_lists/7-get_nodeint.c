#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node of the list
 * @index: position of the node
 *
 * Return: returns the nth node, if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node <= index && head != NULL; node++)
	{
		if (node == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
