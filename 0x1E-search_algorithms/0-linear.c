#include "search_algos.h"
/**
 * linear_search - search for an array of integers using linear search
 * @array: array to be searched
 * @size: size of the array to be searched
 * @value: element to be search
 *
 * Return: an integer
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
