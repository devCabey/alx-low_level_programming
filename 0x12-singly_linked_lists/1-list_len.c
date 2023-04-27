#include "lists.h"
#include <stdio.h>

/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t e = 0;
	const list_t *n = h;

	while (n != NULL)
	{
		n = (*n).next;
		e++;
	}
	return (e);
}
