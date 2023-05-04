#include "main.h"

/**
 * flip_bits - Entry point. Flips number of bits from 1 number to another.
 * @n: input first number of bits to be fliped
 * @m: input second number of bits to be fliped
 * Return: numbers of fliped bits (success)
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int b, num = 0;
	unsigned long int bits;
	unsigned long int bits_ex = n ^ m;

	for (b = 63; b >= 0; b--)
	{
		bits = bits_ex >> b;
		if (bits & 1)
			num++;
	}

	return (num);
}
