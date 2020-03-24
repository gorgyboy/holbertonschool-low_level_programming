#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: begining of the list
 *
 * Return: returns head node’s data (n), if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node_data;

	if (*head == NULL)
		return (0);

	node_data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (node_data);
}
