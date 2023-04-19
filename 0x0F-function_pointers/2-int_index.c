#include "function_pointers.h"

/**
 * int_index - Entry point. It searches for an integer.
 * @array: input array
 * @size: input size of elements in array
 * @cmp: input pointer to function
 * Return: 0 (success)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
