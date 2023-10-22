#include "lists.h"
/**
 *free_list - frees a function
 *@head: head pointer
 *Return: returns nothing
 */
void free_list(list *head)
{
	list_t *tmp;

	while (head == NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
