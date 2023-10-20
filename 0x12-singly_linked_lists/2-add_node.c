#include "lists.h"
/**
 *add_node - adds a new node at beginning of list
 *@head: head pointer
 *@str: string node
 *Return: Newnode else NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int length = 0;

	if (new == NULL)
		return (NULL);
	while (str[length])
		length++;

	new->len = length;
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);
}
