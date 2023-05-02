#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_nodeint_end - add a node at the end of a linked list
 *
 * @head: head
 *
 * @n: An integer
 *
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c;
	listint_t *node;

	c = *head;
	while (c && (*c).next != NULL)
		c = (*c).next;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	(*node).n = n;
	(*node).next = NULL;

	if (c)
		(*c).next = node;
	else
		*head = node;
	return (node);
}
