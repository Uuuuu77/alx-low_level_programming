#include "main.h"

/**
 * print_array -prints elements of the array.
 * @a: array name
 * @n: number of element to be printed
 * Return: a and n inputs
*/
void print_array(int *a, int n)
{
	int o;

	for (o = 0; o < (n - 1); o++)
	{
		printf("%d,", a[o]);
	}
	if (o == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
