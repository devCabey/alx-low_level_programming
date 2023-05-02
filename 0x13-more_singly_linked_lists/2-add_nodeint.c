#include "lists.h"
#include <string.h>

/**
 * *add_nodeint - adds a node to a linked list head
 *
 * @head: linked list head
 *
 * @n: An integer
 *
 * Return: number of elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = (listint_t *) malloc(sizeof(listint_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	(*node).n = n;

	(*node).next = *head;
	*head = node;

	return (node);
}
