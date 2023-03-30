#include "main.h"

/**
 * reverse_array - reverses content of an array of integers.
 * @a: input array
 * @n: input number of element of an array
*/
void reverse_array(int *a, int n)
{
	int p;
	int d;

	for (p = 0; p < n--; p++)
	{
		d = a[p];
		a[p] = a[n];
		a[n] = d;
	}
}
