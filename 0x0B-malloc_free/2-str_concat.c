#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concantenates two strings.
 *@s1: input string.
 *@s2: input string.
 *Return: pointer to new space in memory.
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[j] = s2[j];
		j++;
	}
	str[i] = '\0';
	return (str);
}
