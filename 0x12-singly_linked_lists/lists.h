#ifndef LISTS
#define LISTS

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <strings.h>
/**
 *struct list_s - singly inked list
 *@str: malloc'ed string
 *@len: prints length of the string
 *@next: poointer to next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_S *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
