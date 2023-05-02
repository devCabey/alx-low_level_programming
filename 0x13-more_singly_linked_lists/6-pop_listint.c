#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of linked list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *c;
	int n;

	if (head == NULL)
		return (0);

	c = *head;
	if (c == NULL)
		return (0);

	n = (*c).n;
	*head = (*c).next;
	free(c);
	return (v);
}
