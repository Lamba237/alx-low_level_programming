#include "main.h"
/**
 * set_bit - sets the value of a bit to one at a given index
 * @n: pointer to given bit
 * @index: index of the bit to be set to the desired position
 * Return: 1 for success and -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int buf;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	buf = 1 << index;
	*n |= buf;
	return (1);
}
