#include "lists.h"
/**
 *add_node_end - adds a new node at end of list
 *@head: head pointer
 *@str: holds a string
 *
 *Return: returns new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *tmp = *head;
	unsigned int lens = 0;

	while (str[lens])
		lens++;

	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);

	end->str = strdup(str);
	end->len = lens;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = end;

	return (end);
}
