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
	listint_t *temp;
	listint_t *delete;
	unsigned int n;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);

	for (n = 0; n < index - 1 && temp != NULL && index != 0; n++)
	{
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);
	if (index == 0)
	{
		delete = temp->next;
		free(temp);
		*head = delete;
	}
	else
	{
		if (temp->next == NULL)
			delete = temp->next;
		else
			delete = temp->next->next;
		free(temp->next);
		temp->next = delete;
	}
	return (1);
}
