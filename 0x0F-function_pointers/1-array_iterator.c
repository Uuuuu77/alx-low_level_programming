#include "function_pointers.h"

/**
 * array_iterator - Entry point. Executes a function as a parameter
 * on each element of an array.
 * @array: input array to be executed
 * @size: input size of elements to be printed
 * @action: input pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int arr;

	if (array == NULL || action == NULL)
		return;

	for (arr = 0; arr < size; arr++)
		action(array[arr]);
}
