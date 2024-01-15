#include "main.h"
/**
 *_strpbrk - searches s string for a set of bytes
 *@s: first string
 *@accept: second string
 *
 *Return: returns the memory location of the string
 *else return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}

	}
	return (0);
}
