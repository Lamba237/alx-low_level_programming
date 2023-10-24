#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *frees;

	while ((frees = head) != NULL)
	{
		head = head->next;
		free(frees);
	}
}
