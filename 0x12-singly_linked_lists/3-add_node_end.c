#include "lists.h"
#include <string.h>
#include <stdlib.h>

size_t _strlen(const char *str);

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Pointer to head of the list
 * @str: String to copy
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->len = _strlen(str);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	return (tmp);
}

/**
 * _strlen - Returns string size without '\0'
 * @str: String to measure
 *
 * Return: String size
 */
size_t _strlen(const char *str)
{
	size_t len;

	for (len = 0; str[len] != '\0'; len++)
	{}
	return (len);
}
