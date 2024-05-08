#include "search_algos.h"
/**
 * interpolation_search - search for an element in a sorted array
 * @array: sorted array to be searched
 * @size: array size
 * @value: the value we are searching for in our array
 * Return: an integer
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = (size - 1);
	size_t pos;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				return (low);
			}
			return (-1);
		}
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}
		if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	return (-1);
}
