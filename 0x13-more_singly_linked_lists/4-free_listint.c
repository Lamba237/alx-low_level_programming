#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
		free(head);

	head->next = NULL;
	free(head->next);
}
