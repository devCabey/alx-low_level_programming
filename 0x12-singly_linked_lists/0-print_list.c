#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of singly linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *n = h;

	while (n != NULL)
	{
		printf("[%d] %s\n", (*n).len,
		(*n).str != NULL ? (*n).str : "(nil)");
		n = (*n).next;
		nodes++;
	}
	return (nodes);
}
