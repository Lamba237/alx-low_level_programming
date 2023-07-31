#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: input value.
 * @src: input value.
 * @n: input value.
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n < 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
