#include "search_algos.h"

/**
 * binary_search - Entry point-> It searches using binary search algorithm.
 * @array: input pointer to the first element of the array to search in
 * @size: input number of elements in array
 * @value: imput value to search for
 * Return: index where value is located/stored (Sucess)
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid, x;

	if (!array)
		return (-1);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (x = left; x <= right; x++)
		{
			printf("%d", array[x]);
			if (x < right)
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
