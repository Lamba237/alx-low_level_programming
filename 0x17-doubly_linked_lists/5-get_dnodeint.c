#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: head pointer
 * @index: index of the node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;
	dlistint_t *nth = head;

	if (nth == NULL)
		return (NULL);

	for (x = 0; nth != NULL && x < index; x++)
	{
		nth = nth->next;
	}
	return (nth);
}
