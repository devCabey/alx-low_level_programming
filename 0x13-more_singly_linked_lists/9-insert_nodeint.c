#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: head of linked list
 *
 * @idx: index to insert the node
 *
 * @n: new node data
 *
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *c;
	listint_t *node;

	if (head == NULL)
		return (0);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);

	(*node).next = NULL;
	(*node).n = n;

	if (idx == 0)
	{
		(*node).next = *head;
		(*head) = node;
		return (node);
	}

	c = *head;

	while (idx != 1)
	{
		c = (*c).next;
		--idx;
		if (c == NULL)
		{
			free(node);
			return (NULL);
		}
	}
	(*node).next = (*c).next;
	(*c).next = node;

	return (node);
}

