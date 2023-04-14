#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - It reallocates a memory block using malloc and free
 * @ptr: input pointer to the memory
 * @old_size: input size of allocated memory ptr
 * @new_size: input new size of new memory block
 * Return: pointer to newly allocates memory block (success)
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pptr;
	char *mm;
	unsigned int y;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	pptr = malloc(new_size);

	if (!pptr)
		return (NULL);
	mm = ptr;
	if (new_size < old_size)
	{
		for (y = 0; y < new_size; y++)
			pptr[y] = mm[y];
	}
	if (new_size > old_size)
	{
		for (y = 0; y < old_size; y++)
			pptr[y] = mm[y];
	}
	free(ptr);
	return (pptr);
}
