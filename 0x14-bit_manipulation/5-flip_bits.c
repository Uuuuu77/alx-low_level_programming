#include "main.h"

/**
 * flip_bits - Entry point-> Returns number of bits flipping one to another.
 * @n: input first number
 * @m: input second number
 * Return: number of bits that has flipped (Success)
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, num = 0;
	unsigned long int current;
	unsigned long int excl = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		current = excl >> b;
		if (current & 1)
			num++;
	}
	return (num);
}
