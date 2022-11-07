#include "main.h"
#include <stdlib.h>


/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c);
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	ar = (char)*malloc(sizeof(char) * size);

	if (ar == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ar[i] = c;
	return (array);
}
