#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *frees = head->next;

	if (head != NULL)
		free(head);

	head = frees;
}
