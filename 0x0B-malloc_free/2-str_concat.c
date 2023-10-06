#include <stdlib.h>
#include "main.h"
/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *
 * Return: returns null else concatenated string
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i;
	int r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	r = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[r] != '\0')
		r++;
	concat = malloc(sizeof(char) * (i + r + 1));

	if (concat == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[r] != '\0')
	{
		concat[i] = s2[r];
		i++;
		r++;
	}
	concat[i] = '\0';
	return (concat);
}
