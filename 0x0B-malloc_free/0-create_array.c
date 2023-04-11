#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Creates array of size 'size' and initialize to 'char c'.
 * @size: input size of array
 * @c: input character intialized to
 * Return: pointer to array, NULL (failure)
*/
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int pp;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
		return (NULL);

	for (pp = 0; pp < size; pp++)
	{
		p[pp] = c;
	}
	return (p);
}
