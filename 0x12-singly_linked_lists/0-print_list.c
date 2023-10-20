#include "lists.h"
/**
 *print_list - prints all elements of a list
 *@h: string to be printed
 *
 *Return: returns string counts
 */
size_t print_list(const list_t *h)
{
	size_t str;

	str = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] (%s)\n", h->len, h->str);
		}
		/*pointer h stores the value of the next argument to be passed*/
		h = h->next;
		str++;
	}

	return (str);
}
