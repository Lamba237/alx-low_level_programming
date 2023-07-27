#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: first string,
 * @src: second string,
 *
 * Return: pointer to resulting string,
 * /
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
	j++;
	i++;
	}
	dest[i] = '\0';

	return (dest);
}
