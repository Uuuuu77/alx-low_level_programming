#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte.
 * @s: input value to be filled
 * @b: input value
 * @n: input number of times
 * Return: pointer to memory area s (success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int g;

	for (g = 0; g < n; g++)
		s[g] = b;
	return (s);
}

/**
 * *_calloc - allocates memory for an array using malloc.
 * @nmemb: input number of element in the array
 * @size: input size of each element
 * Return: pointer to allocated memory (success)
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pp;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pp = malloc(size * nmemb);

	if (pp == NULL)
		return (NULL);
	_memset(pp, 0, nmemb * size);

	return (pp);
}
