#include "search_algos.h"
/**
 * advanced_binary - advance binary of a binary search
 * @array: array to be search
 * @size: size of the array
 * @value: value to be search
 * Return: an integer
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t mid, i;
	size_t low = 0;
	size_t high = size - 1;

	while (high >= low)
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
