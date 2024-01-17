#include "search_algos.h"

/**
 * binary_recurse - Entry point-> Applies recursion for the binary search.
 * @array: input pointer to the first element of the array to search in
 * @low: input smallest index
 * @high: input largest index
 * @value: input value to search for
 * Return: index where value is located (Sucess)
*/

int binary_recurse(int *array, size_t low, size_t high, int value)
{
	size_t mid = (low + high) / 2, x;

	if (low > high)
		return (-1);
	printf("Searching in array: ");

	for (x = low; x <= high; x++)
	{
		printf("%d", array[x]);
		if (x < high)
			printf(", ");
	}
	printf("\n");

	if (array[mid] == value)
	{
		if (mid == low || (array[mid - 1] != value))
			return (mid);
		else
			return (binary_recurse(array, low, mid - 1, value));
	}
	else if (array[mid] > value)
		return (binary_recurse(array, low, mid - 1, value));
	else
		return (binary_recurse(array, mid + 1, high, value));
}

/**
 * advanced_binary - Entry point-> It searches for a value in a
 * sorted array of integers.
 * @array: input pointer to the first element of the array to search in
 * @size: input number of elements in array
 * @value: input value to search for
 * Return: index where value is located (Success)
*/

int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (binary_recurse(array, 0, size - 1, value));
}
