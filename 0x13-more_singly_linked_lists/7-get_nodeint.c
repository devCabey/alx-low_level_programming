#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: head of linked list
 *
 * @index: node index to return
 *
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *c;

	if (head == NULL)
		return (0);

	c = head;

	while (index != 0)
	{
		c = (*c).next;
		index--;
		if (c == NULL)
			return (0);
	}

	return (c);
}
