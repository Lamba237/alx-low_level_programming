#include "function_pointers.h"
/**
 *int_index - searches for an interger
 *@array: array to be search
 *@size: size of the array
 *@cmp: pointer to function
 *Return: return -1 else 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 1; i < size; i++)
	{
		if (cmp(array[i]) <= 0)
		{
			return (i);
		}
	}
	return (-1);
}
