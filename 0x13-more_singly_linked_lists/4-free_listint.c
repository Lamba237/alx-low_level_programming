#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *frees = head;

	while (frees != NULL)
	{
		head = head->next;
		free(head);
	}
}
