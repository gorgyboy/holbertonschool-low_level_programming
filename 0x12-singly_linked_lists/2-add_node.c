#include "lists.h"
#include <string.h>
#include <stdlib.h>

size_t _strlen(const char *str);

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: List where we're going to add a new node
 * @str: String to copy
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->len = _strlen(str);
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	return (*head);
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