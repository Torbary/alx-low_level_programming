#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int power = 0;
	unsigned int value;
	unsigned int sum = 0;
	const char *s;

	s = b;

	while (*b != '\0')
	{
		b++;
	}
	b--;

	while (b >= s)
	{
		i = *b - '0';
		value = i * (i << power);
		sum = sum + value;
		b--;
		power++;
	}
	return (sum);
}
