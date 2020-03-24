#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: list to count
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n_nodes;

	for (n_nodes = 0; h != NULL; n_nodes++)
		h = h->next;

	return (n_nodes);
}
