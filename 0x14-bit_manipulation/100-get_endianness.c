#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 for big endian and 1 for little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *ptr = (char *) &x;

	if (*ptr == 1)
	{
		return (1);
	}
	return (0);
}
