#include "limits.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node - adds a new node at beginning of list
 *@head: newnode
 *@str: string to be duplicated
 *Return: neturns NULL else NewNode
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode =  malloc(sizeof(list_t));
	int length = 0;

	if (newNode == NULL)
		return (NULL);
	while (str[length])
		length++;

	newNode->len = length;
	newNode->str = strdup(str);
	newNode->next = *head;
	head = newNode;

	return (newNode);
}
