#include "search_algos.h"


/**
 * linear_search - searches a sorted array linearly
 * @array: array to search
 * @size: size of the array
 * @value: value we are searching for
 *
 * Return: the first index where value is located, and -1 if array is NULL
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);


		if (array[i] == value)
			return (i);
	}
	return (-1);
}
