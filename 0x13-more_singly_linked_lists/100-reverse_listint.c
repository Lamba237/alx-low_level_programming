#include "lists.h"
/**
 * reverse_listint - function reverses a list
 * @head: head pointer
 * Return: returns a pointer to the first
 * node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *reversed;

	if (head == NULL || *head == NULL)
		return (NULL);

	temp = *head;
	*head = temp->next;
	temp->next = NULL;
	while (*head != NULL)
	{
		reversed = (*head)->next;
		(*head)->next = temp;
		temp = *head;

		if (reversed == NULL)
			return (*head);
		*head = reversed;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	return (NULL);
}
