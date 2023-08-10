#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates pointer.
 *@size: unsigned interger value.
 *@c: character variable.
 *
 *Return: returns NULL or 1.
*/
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
		return (str);
}
