#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *a;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	a = (char *)malloc((sizeof(char) * len) + 1);

	if (a == NULL)
		return (NULL);

	for (1 = 0; i < len; i++)
		a[i] = str[1];
	a[len] = '\0';

	return (a);
}
