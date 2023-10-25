#include "lists.h"
/**
 *get_nodeint_at_index - returns nth node of a
 *listint_t linked list
 *@head: pointer to first node
 *@index: traverses a node
 *Return: returns the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node;
	unsigned int n = 0;

	nth_node = head;
	if (head == NULL || nth_node == NULL)
		return (NULL);
	for (n = 0; n < index; n++)
	{
		nth_node = nth_node->next;
	}

	return (nth_node);
}
