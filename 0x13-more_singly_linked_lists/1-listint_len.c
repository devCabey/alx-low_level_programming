#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked list
 *
 * @h: linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t e = 0;
	const listint_t *c = h;

	while (c != NULL)
	{
		c = (*c).next;
		e++;
	}
	return (e);
}
