#include "main.h"
/**
 * _memset - Write a function that fills,
 * memory with a constant byte.
 *
 * @s: input value.
 * @b: input value.
 * @n: input value.
 * Return: return s,
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
