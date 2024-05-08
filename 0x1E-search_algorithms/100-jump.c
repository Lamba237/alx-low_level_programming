#include "search_algos.h"
/**
 * jump_search - search for an element in a sorted array
 * @array: sorted array to be searched
 * @size: Array size
 * @value: the value we are searching for in our array
 *
 * Return: an integer
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t step = sqrt(size);
	size_t prev_value = 0;

	if (array == NULL)
	{
		return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", prev_value, array[prev_value]);
	while (array[prev_value] < value)
	{
		if (prev_value >= size)
		{
			return (-1);
		}
		prev_value += step;
		if (prev_value < size)
		{
			printf("Value checked array[%ld] = [%d]\n", prev_value, array[prev_value]);
		}
	}
	if (array[prev_value] == value)
	{
		return (prev_value);
	}
	for (i = prev_value - step; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
