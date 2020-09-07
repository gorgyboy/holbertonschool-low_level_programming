#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: list to free
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
