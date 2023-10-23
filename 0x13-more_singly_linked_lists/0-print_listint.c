#include "lists.h"
/**
 * print_listint - prints all elements
 * of a listint_t list
 * @h: constant int to be printed
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (!h->n)
		{
			return (0);
		}
		else
		{
			printf("%d\n",  h->n);
		}
		h = h->next;
		n++;
	}
	return (n);
}
