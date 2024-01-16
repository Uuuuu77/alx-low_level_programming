#include "search_algos.h"

/**
 * binary_searching - Entry point-> It searches using binary search algorithm.
 * @array: input pointer to the first element of the array to search in
 * @low: input first value in array block
 * @high: input last value in array block
 * @value: input value to be searched
 * Return: index where value is located or -1 otherwise (Success)
 */

int binary_searching(int *array, size_t low, size_t high, int value)
{
	int left = low;
	int right = high;
	int mid, i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - Entry point-> It searches integer in array using
 * exponential algorithm.
 * @array: input pointer to the first element of the array to search in
 * @size: input number of elements in array
 * @value: input value to be searched
 * Return: index where value is located or -1 otherwise (Success)
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t b = 1, low, high;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while (b < size && array[b] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		b *= 2;
	}

	low = b / 2;
	if (b < size - 1)
		high = b;
	else
		high = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_searching(array, low, high, value));
}
