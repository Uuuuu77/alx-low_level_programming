#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of 612852475143.
 * Return: 0 (success)
*/
int main(void)
{
	long int n;
	long int max;
	long int f;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	for (f = 3; f <= sqrt(n); f = f + 2)
	{
		while (n % f == 0)
		{
			max = f;
			n = n / f;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	printf("%ld\n", max);
	return (0);
}
