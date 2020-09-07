#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: first node of the list
 * @index: position of the node
 *
 * Return: returns the nth node, if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node <= index && head != NULL; node++)
	{
		if (node == index)
			return (head);

		head = head->next;
	}
	return (NULL);
}
