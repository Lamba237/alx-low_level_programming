#include "main.h"
/**
 * get_endianness - check edianness
 * Return: nothing
 */
int get_endianness(void)
{
	int x;
	char *check;

	x = 1;
	check = (char *)&x;
	return ((int)check[0]);
}
