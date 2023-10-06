#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 *_strdup - function returns point to duplicate string
 *@str: pointer string
 *
 *Return: Null if str is null || dup is null else dup
 */
char *_strdup(char *str)
{
	char *dup;
	int i;
	int r;

	i = 0;
	r = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		dup[r] = str[r];

	return (dup);
}
