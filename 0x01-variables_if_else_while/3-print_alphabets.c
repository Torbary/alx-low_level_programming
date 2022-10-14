#include <stdio.h>

/**
  * main -Entry point
  *
  * Return: ALways (0) Success
  *
  */

int main(void)
{
	char alphabet = 'a';
	char ch;

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar (ch);
	}
	return (0);
}
