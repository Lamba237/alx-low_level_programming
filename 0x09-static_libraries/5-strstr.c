#include "main.h"
/**
 *_strstr - locates a substring
 *@haystack: char input
 *@needle: pointer character
 *
 *Return: returns haystack else 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h)
	{
		h = haystack;
		n - needle;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
