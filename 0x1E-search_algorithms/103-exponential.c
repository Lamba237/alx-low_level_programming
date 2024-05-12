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
	size_t low = 0;
	size_t high = size - 1;
	size_t mid, i;
	int first_iteration = 1;

	while (high >= low)
	{
		mid = low + (high - low) / 2;

		if (!first_iteration)
		{
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
		}

		if (array[mid] == value)
		{
			return (mid);
		}

		if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}

		first_iteration = 0;
	}

	return (-1);
}
/**
 * exponential_search - search for an element in a sorted array
 * @array: sorted array to be searched
 * @size: array size
 * @value: the value we are searching for in our array
 * Return: an integer
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t high;

	if (array[0] == value)
    {
        return 0;
    }
    while (i < size && array[i] <= value)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        i = i * 2;
    }

    high = i < size ? i : size - 1;
    printf("Value found between indexes [%lu] and [%lu]\n", i/2, high);

    return (array; i < size ? i : size);
}
