#include "search_algos.h"
#include <math.h>
#include <stddef.h>

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not present or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, position;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		position = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", position, array[position]);


		if (array[position] == value)
			return (position);
		if (array[position] <  value)
			low = position + 1;
		else
			high = position - 1;
	}
	printf("Value checked array[%lu] is out of range\n", position);
	return (-1);
}
