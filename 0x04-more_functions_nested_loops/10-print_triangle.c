#include "main.h"

/**
  * print_triangle - entry point
  * Description: print diagonals
  *@size: size of the triangle
  * Return: void
  */

void print_triangle(int size)
{
	int row, hashes, bars;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (bars = size - row; bars >= 1; bars--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= row; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
