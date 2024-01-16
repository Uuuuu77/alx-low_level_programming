#include "search_algos.h"

/**
 * jump_search - Entry point-> Searches for a value using jump search algoritm.
 * @array: input pointer to the first element of the array to search in
 * @size: input number of elements in array
 * @value: input value to search for
 * Return: first index where value is located/stored (Success)
*/

int jump_search(int *array, size_t size, int value)
{
	int n = size, step, next, prev = 0;

	if (!array)
		return (-1);
	step = sqrt(n);

	while (prev < n)
	{
		if (array[prev] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev += step;
	}
	next = prev - step;
	printf("Value found between indexes [%d] and [%d]\n", next, prev);
	if (prev >= n)
		prev = n - 1;

	while (next <= prev)
	{
		printf("Value checked array[%d] = [%d]\n", next, array[next]);
		if (array[next] == value)
			return (next);
		next++;
	}

	return (-1);
}
