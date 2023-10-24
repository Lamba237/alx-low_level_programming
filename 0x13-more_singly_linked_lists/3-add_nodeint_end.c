#include "lists.h"
/**
 * add_nodeint_end - adds a new node at
 * end of a list
 * @head: head pointer
 * @n: constant int
 * Return: returns new element else
 * return NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end = malloc(sizeof(listint_t));
	listint_t *current_node;

	(void)current_node;

	if (node_end == NULL)
		return (NULL);
	node_end->n = n;
	node_end->next = NULL;
	current_node = *head;
	if (*head == NULL)
	{
		*head = node_end;
	}
	else
	{
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = node_end;
	}

	return (*head);
}
