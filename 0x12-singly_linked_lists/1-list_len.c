#include "lists.h"
/**
 *list_len - returns length of string
 *@h: const lisy
 *Return: returns count
 */
size_t list_len(const list_t *h)
{
	size_t counts = 0;

	while (h != NULL)
	{
		h = h->next;
		counts++;
	}
	return (counts);
}
