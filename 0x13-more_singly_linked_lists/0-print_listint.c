#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: list to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes;

	for (n_nodes = 0; h != NULL; n_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (n_nodes);
}
