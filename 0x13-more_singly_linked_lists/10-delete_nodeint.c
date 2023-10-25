#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node a given
 * index of a linked list
 * @head: pointer to first node
 * @index: counter
 * Return: 1 for success or -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete;
	unsigned int n;

	if (head == NULL || *head == NULL)
		return (-1);

	for (n = 0; n < index - 1 && delete != NULL; n++)
	{
		delete = (*head);
		*head = (*head)->next;
	}
	free(delete);
	return (1);
}
