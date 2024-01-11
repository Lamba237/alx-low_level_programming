#include "lists.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning
 * of a linked list
 * @head: head pointer
 * @n: data to be added
 * Return: address of new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
