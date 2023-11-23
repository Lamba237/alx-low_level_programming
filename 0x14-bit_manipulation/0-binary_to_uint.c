#include "main.h"
/**
 * binary_to_uint - this function converts a given binary
 * number to an unsigned int
 * @b: binary string to be converted
 * Return: converted string
 */
unsigned int binary_to_uint(const char *b)
{
	int i;

	unsigned int buffer = 0;
	int length = strlen(b);

	for (i = 0; i < length; i++)
	{
		if (b == NULL || (b[i] != '0' && b[i] != '1'))
			return (0);
		if (b[i] == '1')
		{
			buffer += 1 << (length - 1 - i);
		}
	}
	return (buffer);
}
