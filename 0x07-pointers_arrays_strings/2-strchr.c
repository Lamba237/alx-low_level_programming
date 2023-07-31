#include "main.h"
/**
 * _strchr - locaates a character in a string.
 * @s: pointer string.
 * @c: character variable.
 *
 * Return: c or null.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
