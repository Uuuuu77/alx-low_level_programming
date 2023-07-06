#include "main.h"

/**
 * print_binary - Entry point -> Basically prints binary rep of a number.
 * @n: input number to be printed in binary
*/
void print_binary(unsigned long int n)
{
	int b, num = 0;
	unsigned long int current;

	for (b = 63; b >= 0; b--)
	{
		current = n >> b;
		if (current & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
