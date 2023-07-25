#include "main.h"

/** 
 * print_rev - Write a function that prints a string, in reverse,
 * followed by a new line.
 * @s: character pointer.
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;

	for (j = len; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
