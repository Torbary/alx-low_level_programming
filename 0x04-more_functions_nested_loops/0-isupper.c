#include "main.h"

/**
  * _isupper - check if its uppercase
  * @c: argument passed
  *
  * Return: (1) success and (0) fail
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
