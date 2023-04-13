#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - It allocates memory using malloc.
 * @b: input number of bytes to be allocated
 * Return: a pointer to allocated memory (success)
*/
void *malloc_checked(unsigned int b)
{
	void *bb;

	bb = malloc(b);

	if (bb == NULL)
		exit(98);

	return (bb);
}
