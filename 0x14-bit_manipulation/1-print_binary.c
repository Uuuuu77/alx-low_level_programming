#include "main.h"

/**
 * print_binary - Entry point. Prints binary representation of a number.
 * @n: input number in binary to be printed
*/
void print_binary(unsigned long int n)
{
	int b, number = 0;
	unsigned long int binary;

	for (b = 63; b >= 0; b--)
	{
		binary = n >> b;
		if (binary & 1)
		{
			_putchar('1');
			number++;
		}
		else if (number)
			_putchar('0');
	}
	if (!number)
		_putchar('0');
}
