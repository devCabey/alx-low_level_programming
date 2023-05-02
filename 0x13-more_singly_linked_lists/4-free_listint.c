#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: head of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *c;
	listint_t *next;

	c = head;

	while (c != NULL)
	{
		next = (*c).next;
		free(c);
		c = next;
	}
}
