#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list
 * @head: list to free
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = tmp->next;
		tmp = head;
	}
}
