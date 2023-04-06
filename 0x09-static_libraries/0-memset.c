#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: input to be printed
 * @b: input to be printed
 * @n: input to be printed
 * Return: s (success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	int d;

	d = 0;

	for (; n > 0; d++)
	{
		s[d] = b;
		n--;
	}
	return (s);
}
