#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at
 * given position
 * @head: head pointer
 * @idx: unsigned int
 * @n: node data
 * Return: address else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current_node = *head;
	for (i = 0; i < idx && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL)
		return (NULL);

	new->next = current_node->next;
	current_node->next = new;

	return (new);
}
