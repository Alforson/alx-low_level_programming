#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: The linked list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
