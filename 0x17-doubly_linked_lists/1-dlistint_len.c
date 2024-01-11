#include "lists.h"
/**
 * dlistint_len - returns number of elements in a
 * linked list
 * @h: head pointer
 * Return: Number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
