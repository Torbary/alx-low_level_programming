#include "main.h"

/**
  * wildcamp - compare two strings
  *@s1: string 1
  *@s2: string 2
  * Return: 0
  */

int wildcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		return (1);
	}
	
	if (*s1 == *s2)
		return (1);
	return (0);
	
}
