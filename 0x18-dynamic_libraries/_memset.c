#include "main.h"
/**
 *_memset - write a function that fills
 *memory with a constant byte
 *@s: input char
 *@b: input char
 *@n: unsigned bit
 *
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
