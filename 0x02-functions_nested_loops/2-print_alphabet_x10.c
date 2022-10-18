#include "main.h"

/**
  * print_alphabet_x10 -> print the lowercase alpha x 10
  *
  */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; i < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar (i);
		}
		_putchar ('\n');
	}
}
