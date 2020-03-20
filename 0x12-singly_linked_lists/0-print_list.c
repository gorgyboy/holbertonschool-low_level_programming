#include "lists.h"
#include <stdio.h>

/**
 * _strlen - Returns string size without '\0'
 * @str: String to measure
 *
 * Return: String size
 */
size_t _strlen(char *str)
{
	size_t len;

	len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * print_list - Prints all the elements of a list_t list
 * @h: list to print
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}
	return (i);
}
