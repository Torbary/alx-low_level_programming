#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where value is located or -1 if the value is not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, mid;
	int result;

	if (!array)
		return (-1);

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d%s", array[i], i == size - 1 ? "\n" : ", ");

	if (size == 1 && array[0] != value)
		return (-1);

	mid = (size - 1) / 2;

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
	}

	if (array[mid] < value)
	{
		result = advanced_binary(array + mid + 1,
			 size - mid - 1, value);
		if (result != -1)
			return (result + mid + 1);
	}
	else
		return (advanced_binary(array, mid + 1, value));
	return (-1);
}
