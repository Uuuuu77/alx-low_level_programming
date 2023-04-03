#include "main.h"

/**
 * print_diagsums - prints sum of 2 diagonals of a square matrix of integer.
 * @a: input pointer
 * @size: input size of integer
*/
void print_diagsums(int *a, int size)
{
	int sum1, sum2;
	int m;

	sum1 = 0;
	sum2 = 0;

	for (m = 0; m < size; m++)
	{
		sum1 = sum1 + a[m * size + m];
	}
	for (m = size - 1; m >= 0; m--)
	{
		sum2 +=  a[m * size + (size - m - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
