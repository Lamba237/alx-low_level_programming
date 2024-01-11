#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer
 * Return: NULL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new, *current;

	current = head;
	while (current != NULL)
	{
		new = current->next;
		free(current);
		current = new;
	}
}
