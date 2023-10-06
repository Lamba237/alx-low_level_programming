#include <stdlib.h>
#include "main.h"
/**
 *_strdup - function returns point to duplicate string
 *@str: pointer string
 *
 *Return: Null if str is null || dup is null else dup
 */
char *_strdup(char *str)
{
	char *dup;
	int i, r;

	i = 0;
	r = 0;
	dup = str;

	if (str == NULL || dup == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	for (r = 0; str[r]; r++)
		dup[r] = str[r];
	return (dup);
}
