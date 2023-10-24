#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	int n = 0;

	head->n = n;
	head->next = NULL;
	free(head->next);
	free(head);
}
