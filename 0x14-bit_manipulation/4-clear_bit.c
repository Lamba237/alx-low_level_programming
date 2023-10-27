#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: value of bit to be set
 * @index: index counter
 * Return: 1 if it works or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8 - 1))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
