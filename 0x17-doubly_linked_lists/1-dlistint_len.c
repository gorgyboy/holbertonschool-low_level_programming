#include "lists.h"

/**
 * list_len - Returns size of linked list
 * @h: Linked list
 *
 * Return: Size of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
    size_t count;

    count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }
    
    return (count);
}
