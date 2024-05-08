#include "search_algos.h"
/**
 * binary_search - search for an element in a sorted array
 * using binary search algorithm
 * @array: sorted array to be searched
 * @size: Array size
 * @value: the value we are searching for in our array
 * Return: an integer
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, i;
	size_t low = 0;
	size_t high = size - 1;

	while (low < high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != high)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d", array[i]);
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
