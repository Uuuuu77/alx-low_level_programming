#include "main.h"
#include <stdlib.h>

/**
 * *array_range - It creates an array of integers.
 * @min: input minimum value stored
 * @max: input maximum value stored
 * Return: pointer to new array of integer (success)
*/
int *array_range(int min, int max)
{
	int *new;
	int h, hh;

	if (min > max)
		return (NULL);

	hh = max - min + 1;

	new = malloc(sizeof(int) * hh);

	if (new == NULL)
		return (NULL);
	for (h = 0; min <= max; h++)
		new[h] = min++;

	return (new);
}
