#include "main.h"

/**
  * _pow_recursion - return the value of x raised to y
  *@x: argument 1
  *@y: argument 2
  * Return: return the value of x raised to pow of y
  */

int _pow_recursion(int x, int y)
{
	x = x * y;

	if (y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x));
}

