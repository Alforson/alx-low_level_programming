#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: The head of the linked list to be freed.
 */
void free_list(list_t *head)
{
	list_t *current, *temp;

	for (current = head; current != NULL; current = temp)
	{
		temp = current->next;
		free(current->str);
		free(current);
	}
}
