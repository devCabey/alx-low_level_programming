#include "lists.h"
#include <string.h>

/**
 * *add_node - adds a node to a linked list head
 * @head: linked list head
 * @str: string element of the linked list
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int s;

	node = (list_t *) malloc(sizeof(list_t));

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
	for (s = 0; str[s] != '\0';  s++)
	;

	(*node).len = s;
	(*node).next = *head;
	*head = node;

	return (node);
}
