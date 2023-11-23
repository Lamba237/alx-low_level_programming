#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 * @n: pointer to unsigned int
 * @index: index
 * Return: 1 for success and -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int buf;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	buf = ~(1 << index);
	*n &= buf;
	return (1);
}
