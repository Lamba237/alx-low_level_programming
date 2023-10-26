#include "main.h"
/**
 * get_bit - returns value of bit at given index
 * @n: bit to be returned
 * @index: bit position
 * Return: returns bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit, bit_holder;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	bit = 1 << index;
	bit_holder = n & bit;

	if (bit == bit_holder)
	{
		return (1);
	}
	return (0);
}
