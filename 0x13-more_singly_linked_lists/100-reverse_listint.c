#include "lists.h"

/**
 * reverse_listint - reverse a linked list.
 *
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *node;

	ptr = NULL;
	node = NULL;

	while (*head != NULL)
	{
		node = (*(*head)).next;
		(*(*head)).next = ptr;
		ptr = *head;
		*head = node;
	}

	*head = ptr;
	return (*head);
}
