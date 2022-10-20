#include "main.h"

/**
  * _isdigit - check if its digit
  *
  * @c: argument passed
  *
  * Return: (1) SUccess and (0) fail
  */

int _isdigit(int c)
{
	for (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
