#include "main.h"
#include <stdio.h>

/**
  * get_endianess - checks the endianess
  * 
  * Return: 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	int n;
	char *c;

	n = 1;
	c = (char *)(&n);

	return (*c);

}
