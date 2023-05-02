#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print elements of linked list
 *
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;
	const listint_t *c = h;

	while (c != NULL)
	{
		printf("%i\n", (*c).n);
		c = (*c).next;
		node++;
	}
	return (node);
}
