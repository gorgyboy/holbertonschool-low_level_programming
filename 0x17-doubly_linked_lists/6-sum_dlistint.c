#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked
 * list
 * @head: list to sum
 *
 * Return: sum of all the data, if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
