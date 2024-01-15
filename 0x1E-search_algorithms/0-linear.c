#include "search_algos.h"

/**
 * linear_search - Entry point-> It searches for a value in an array of
 * integers using linear search algorithms.
 * @array: input pointer to the first element of the array to search in
 * @size: input number of elements in array
 * @value: input value to search for
 * Return: first index where value is located and stored (Success)
*/

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (!array)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}

	return (-1);
}
