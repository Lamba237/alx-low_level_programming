#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *is_palindrome - returns 1 if a string is palindrome
 *@s: string to be checked
 *Return: 1 for palindrome else 0
 */
int is_palindrome(char *s)
{
	int x = 0;
	int y = strlen(s) - 1;

	while (x < y)
	{
		if (s[x] != s[y])
		{
			return (0);
		}
		x++;
		y--;
	}
	return (1);
}
