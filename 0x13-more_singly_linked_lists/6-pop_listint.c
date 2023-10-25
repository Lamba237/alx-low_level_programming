#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to first node
 * Return: returns heads node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL || head == NULL)
		return (0);
	n = (*head)->n;
	temp = (*head);
	*head  = (*head)->next;
	free(temp);
	return (n);
}
