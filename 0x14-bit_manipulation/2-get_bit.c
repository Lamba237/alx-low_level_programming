#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @index: index to be returned
 * @n: given bits
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int buffer;
	unsigned  int holder;

	if (n == '\0')
		return (-1);
	holder = 1 << index;
	buffer = (n & holder);
	return ((buffer) != 0);
}
