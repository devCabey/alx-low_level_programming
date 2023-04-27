#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *n;
	list_t *node;

	n = head;

	while (n != NULL)
	{
		node = (*n).next;
		free((*n).str);
		free(n);
		n = node;
	}
}
