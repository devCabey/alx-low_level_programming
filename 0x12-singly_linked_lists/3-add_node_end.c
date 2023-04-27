#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - add a node at the end of a linked list
 *
 * @head: The character to print
 *
 *  @str: string for the new node
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *node;
	int c;

	n = *head;
	while (n && (*n).next != NULL)
		n = (*n).next;

	c = 0;
	while (str[c] != '\0')
		c++;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	(*node).str = strdup(str);
	if ((*node).str == NULL)
	{
		free(node);
		return (NULL);
	}
	(*node).len = c;
	(*node).next = NULL;

	if (n)
		(*n).next = node;
	else
		*head = node;
	return (node);
}
