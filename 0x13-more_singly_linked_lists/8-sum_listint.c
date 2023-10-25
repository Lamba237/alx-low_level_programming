#include "lists.h"
/**
 * sum_listint - functions that returns sum
 * of all the data of listint_t linked list
 * @head: head pointer
 * Return: sum of all n
 */
int sum_listint(listint_t *head)
{
	int n = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
